#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"

// Mock dependencies
class MockSystem : public SystemInterface {
public:
    static std::queue<check_SKey> inputs;
    static std::string output;

    static void enqueueInput(check_SKey key) {
        inputs.push(key);
    }

    static check_SKey readKey() override {
        if (!inputs.empty()) {
            auto k = inputs.front();
            inputs.pop();
            return k;
        }
        return { false, '\n', SpecialKey::NOT_DEFINED_KEY };
    }

    static void printString(const char* str) override {
        output += str;
    }

    static void putChar(char c) override {
        output += c;
    }
};

// Redefine static members
std::queue<check_SKey> MockSystem::inputs;
std::string MockSystem::output;

// Redirect SystemInterface to mock
#define SystemInterface MockSystem

TEST_CASE("CLI Basic Typing") {
    CommandLineEditor cli;
    SpecialKeyHandler handler;
    cli.setSpecialKeyHandler(&handler);

    std::string result;

    MockSystem::output.clear();
    MockSystem::enqueueInput({ false, 'H', SpecialKey::NOT_DEFINED_KEY });
    MockSystem::enqueueInput({ false, 'I', SpecialKey::NOT_DEFINED_KEY });
    MockSystem::enqueueInput({ false, '\n', SpecialKey::NOT_DEFINED_KEY });

    REQUIRE(cli.getLineFromCli(result));
    REQUIRE(result == "HI");
}

TEST_CASE("CLI Function Key Injection") {
    CommandLineEditor cli;
    SpecialKeyHandler handler;
    cli.setSpecialKeyHandler(&handler);

    std::string result;

    MockSystem::output.clear();
    MockSystem::enqueueInput({ true, 0, SpecialKey::F1 });

    REQUIRE(cli.getLineFromCli(result));
    REQUIRE(result == "RUN");
}

TEST_CASE("CLI Backspace Support") {
    CommandLineEditor cli;
    cli.setSpecialKeyHandler(nullptr);

    std::string result;

    MockSystem::output.clear();
    MockSystem::enqueueInput({ false, 'A', SpecialKey::NOT_DEFINED_KEY });
    MockSystem::enqueueInput({ false, '\b', SpecialKey::NOT_DEFINED_KEY });
    MockSystem::enqueueInput({ false, '\n', SpecialKey::NOT_DEFINED_KEY });

    REQUIRE(cli.getLineFromCli(result));
    REQUIRE(result == "");
}
