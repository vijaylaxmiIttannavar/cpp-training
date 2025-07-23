#ifndef COMMAND_LINE_EDITOR_H
#define COMMAND_LINE_EDITOR_H

#include <string>

// Forward declarations of classes assumed defined elsewhere
class ProgramMemory;
class Parser;
class Executor;

class CommandLineEditor {
public:
    CommandLineEditor(ProgramMemory& mem, Parser& pars, Executor& exec);

    // Starts the REPL loop
    void run();

private:
    ProgramMemory& programMemory;
    Parser& parser;
    Executor& executor;

    void processInput(const std::string& inputLine);
    bool isProgramLine(const std::string& inputLine);
    int getLineNumber(const std::string& inputLine);
};

#endif // COMMAND_LINE_EDITOR_H
