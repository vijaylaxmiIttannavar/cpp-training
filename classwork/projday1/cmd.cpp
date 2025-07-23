#include "CommandLineEditor.h"
#include "../Storage/ProgramMemory.h"
#include "../Parser/Parser.h"
#include "../Runtime/StatementExecutor.h"
#include "SpecialKeyHandler.h"
#include "ScreenRenderer.h"
#include "../Utils/ASTNode.h"

#include <iostream>
#include <sstream>
#include <cctype>

namespace gw_basic {

    CommandLineEditor::CommandLineEditor(ProgramMemory& mem,
        Parser& parser,
        StatementExecutor& executor,
        SpecialKeyHandler& keyHandler,
        ScreenRenderer& screen)
        : programMemory(mem),
        parser(parser),
        executor(executor),
        specialKeyHandler(keyHandler),
        screenRenderer(screen) {}

    void CommandLineEditor::run() {
        std::string line;

        screenRenderer.printLine("GW-BASIC64 Ready.");
        while (true) {
            std::cout << "> ";
            std::getline(std::cin, line);

            if (line.empty()) continue;
            if (line == "EXIT" || line == "QUIT") break;

            handleInput(line);
        }
    }

    void CommandLineEditor::handleInput(const std::string& line) {
        if (isProgramLine(line)) {
            int lineNumber = extractLineNumber(line);
            std::string content = line.substr(std::to_string(lineNumber).length());

            if (content.find_first_not_of(" \t") == std::string::npos) {
                programMemory.removeLine(lineNumber);
            }
            else {
                programMemory.storeLine(lineNumber, line);
            }

        }
        else if (specialKeyHandler.handle(line)) {
            // special key handled (SAVE, LOAD, etc.)
        }
        else {
            auto ast = parser.parse(line);
            if (ast) {
                executor.execute(ast);
            }
            else {
                screenRenderer.printError("Syntax Error");
            }
        }
    }

    bool CommandLineEditor::isProgramLine(const std::string& line) const {
        return !line.empty() && std::isdigit(line[0]);
    }

    int CommandLineEditor::extractLineNumber(const std::string& line) const {
        std::istringstream iss(line);
        int num = 0;
        iss >> num;
        return num;
    }

} // namespace gw_basic