#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>      // for system()
#include <filesystem>   // C++17

namespace fs = std::filesystem;

// Utility to run the compiled interpreter with redirected input/output
std::string runInterpreterWithInput(const std::string& inputText) {
    const std::string inputFile = "test_input.txt";
    const std::string outputFile = "test_output.txt";

    // Write input to file
    {
        std::ofstream in(inputFile);
        in << inputText;
    }

    // Run your program with input redirected from file and output captured
    std::string command = "interpreter.exe < " + inputFile + " > " + outputFile;
    int ret = system(command.c_str());
    if (ret != 0) {
        std::cerr << "Error: interpreter.exe failed to run." << std::endl;
        return "";
    }

    // Read output
    std::ifstream out(outputFile);
    std::string content((std::istreambuf_iterator<char>(out)),
        std::istreambuf_iterator<char>());

    // Cleanup
    fs::remove(inputFile);
    fs::remove(outputFile);

    return content;
}

void runTest(const std::string& testName, const std::string& simulatedInput, const std::string& expectedOutput) {
    std::cout << "Running test: " << testName << " ... ";
    std::string result = runInterpreterWithInput(simulatedInput);

    if (result.find(expectedOutput) != std::string::npos) {
        std::cout << "? PASSED" << std::endl;
    }
    else {
        std::cout << "? FAILED\nExpected: " << expectedOutput << "\nActual: " << result << std::endl;
    }
}

int main() {
    // Test 1: Basic typing
    runTest("Basic HELLO", "HELLO\n", "HELLO");

    // Test 2: BACKSPACE (simulate as \b)
    runTest("Backspace", "HELL\bO\n", "HELO");

    // Test 3: LEFT arrow (assumes F1 inserts something like LIST)
    runTest("F1 Key Test", "\x1B[[A\n", "LIST"); // Some terminals send ESC [[A for F1

    // Test 4: ESC cancels
    runTest("ESC Cancel", "\x1B", ""); // Just ESC, program might exit or print nothing

    return 0;
}
