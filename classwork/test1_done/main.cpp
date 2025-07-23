#include "SystemInterface.h"
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "ScreenRenderer.h"

int main() {
    SystemInterface::init();

    CommandLineEditor cli;
    SpecialKeyHandler specialHandler; 
    cli.setSpecialKeyHandler(&specialHandler);

    //  Simulate REPL
    std::string input;
    while (true) {
        SystemInterface::printString("> ");

        // Get input line as supports arrow keys, backspace, etc.
        if (!cli.getLineFromCli(input))
            break;  // ESC or Ctrl+C pressed

        // Output
        SystemInterface::printString("You entered: ");
        SystemInterface::printString(input.c_str());  // FIX: use c_str()
        SystemInterface::putChar('\n');
    }

    return 0;
}







