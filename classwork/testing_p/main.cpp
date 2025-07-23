/*#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"

int main() {
    // Initialize system (optional, depending on platform implementation)
    SystemInterface::init();

    // Clear screen and show banner
    SystemInterface::clearScreen();
    SystemInterface::printString("GW-BASIC64 INTERPRETER\n");
    SystemInterface::printString("----------------------\n");
    SystemInterface::printString("Use F1–F10 keys for quick commands.\n");
    SystemInterface::printString("Press ESC or Ctrl+Z to exit.\n\n");

    // Initialize CLI and special key handler
    CommandLineEditor cliEditor;
    SpecialKeyHandler specialKeyHandler;
    cliEditor.setSpecialKeyHandler(&specialKeyHandler);

    std::string userInput;

    while (true) {
        SystemInterface::printString("READY.\n> ");

        // Get input line from user
        if (!cliEditor.getLineFromCli(userInput)) {
            SystemInterface::printString("\nExiting GW-BASIC64...\n");
            break;
        }

        // Simulated execution of user input
        std::string msg = "Executing command: " + userInput + "\n";
        SystemInterface::printString(msg.c_str());

        // Here you can connect interpreter->runCommand(userInput) if needed
    }

    return 0;
}*/

/*
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"

int main() {
    SystemInterface::init();

    CommandLineEditor editor;
    SpecialKeyHandler keyHandler;
    editor.setSpecialKeyHandler(&keyHandler);

    std::string line;
    while (true) {
        SystemInterface::printString("> ");
        if (!editor.getLineFromCli(line)) break;

        SystemInterface::printString(("Executing command: " + line + "\n").c_str());
        SystemInterface::printString("READY.\n");
    }

    return 0;
}  */

// main.cpp
/*
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"
#include <string>

int main() {
    SystemInterface::init();

    CommandLineEditor cli;
    SpecialKeyHandler specialHandler;
    cli.setSpecialKeyHandler(&specialHandler);

    std::string input;
    while (true) {
        SystemInterface::printString("> ");
        if (!cli.getLineFromCli(input)) break;

        SystemInterface::printString("Executing command: ");
        SystemInterface::printString(input.c_str());
        SystemInterface::printString("\nREADY.\n");
    }

    return 0;
}

*/
// main.cpp
/*
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"
#include <string>

int main() {
    SystemInterface::init();

    CommandLineEditor cli;
    SpecialKeyHandler specialHandler;
    cli.setSpecialKeyHandler(&specialHandler);

    std::string input;
    while (true) {
        SystemInterface::printString("> ");
        if (!cli.getLineFromCli(input)) break;

        SystemInterface::printString("Executing command: ");
        SystemInterface::printString(input.c_str());
        SystemInterface::printString("\nREADY.\n");
    }

    return 0;
}
*/
/*
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"

int main() {
    SystemInterface::init();

    CommandLineEditor cli;
    SpecialKeyHandler specialHandler;
    cli.setSpecialKeyHandler(&specialHandler);

    std::string input;
    while (true) {
        SystemInterface::printString("> ");
        if (!cli.getLineFromCli(input))
            break;
        std::string l = "Command: " + input + "\n";
        SystemInterface::printString(l.c_str());
    }

    return 0;
} */
/*
#include "SystemInterface.h"
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"

int main() {
    SystemInterface::init();

    CommandLineEditor cli;
    SpecialKeyHandler handler(nullptr); // No GWBasic logic, so pass nullptr
    cli.setSpecialKeyHandler(&handler);

    std::string input;

    while (true) {
        SystemInterface::printString("Ok\n");
        SystemInterface::printString("> ");

        if (!cli.getLineFromCli(input)) break;

        SystemInterface::printString("Executing command: ");
        SystemInterface::printString(input.c_str());
        SystemInterface::putChar('\n');
    }
    return 0;
}
*/
/*
#include "SystemInterface.h"
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include <iostream>

int main() {
    SystemInterface::init();  // Initialize the input system

    CommandLineEditor editor;

    SpecialKeyHandler handler(nullptr);  // Not using interpreter yet
    editor.setSpecialKeyHandler(&handler);

    std::string line;
    SystemInterface::printString("Type something (F1-F10 work, type EXIT to quit)\n");

    while (true) {
        SystemInterface::printString("\n> ");  // Prompt
        bool ok = editor.getLineFromCli(line);

        if (!ok) {
            SystemInterface::printString("\nExiting...\n");
            break;
        }

        if (line == "EXIT") {
            SystemInterface::printString("Goodbye!\n");
            break;
        }

        SystemInterface::printString("You typed: ");
        SystemInterface::printString(line.c_str());
        SystemInterface::putChar('\n');
    }

    return 0;
}   */

#include "SystemInterface.h"
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "ScreenRenderer.h"

int main() {
    SystemInterface::init();

    CommandLineEditor cli;
    SpecialKeyHandler specialHandler; // ? works now
    cli.setSpecialKeyHandler(&specialHandler);

    // Step 3: Simulate REPL
    std::string input;
    while (true) {
        SystemInterface::printString("> ");

        // Get input line (supports arrow keys, backspace, etc.)
        if (!cli.getLineFromCli(input))
            break;  // ESC or Ctrl+C pressed

        // Output what was typed or injected
        SystemInterface::printString("You entered: ");
        SystemInterface::printString(input.c_str());  // FIX: use c_str()
        SystemInterface::putChar('\n');
    }

    return 0;
}







