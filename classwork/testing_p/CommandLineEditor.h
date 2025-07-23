/*#pragma once

#include <string>
#include <fstream>
#include "SystemInterface.h"

// Forward declarations
class SpecialKeyHandler;

class CommandLineEditor {
public:
    CommandLineEditor();  // Default constructor

    // Captures user input line by line
    bool getLineFromCli(std::string& line);

    // Setter for special key handler
    void setSpecialKeyHandler(SpecialKeyHandler* handler);

private:
    std::string buffer;        // Current input buffer
    size_t cursorPosition;     // Cursor position in buffer
    SpecialKeyHandler* specialKeyHandler; // Handles function keys
}; */
/*
#pragma once
#include <string>

class SpecialKeyHandler;  // forward declaration

class CommandLineEditor {
public:
    CommandLineEditor();
    void setSpecialKeyHandler(SpecialKeyHandler* handler);
    bool getLineFromCli(std::string& line);

private:
    std::string buffer;
    size_t cursorPosition;
    SpecialKeyHandler* specialKeyHandler;
};
*/

#ifndef COMMANDLINEEDITOR_H
#define COMMANDLINEEDITOR_H

#include <string>
#include "SpecialKeyHandler.h"

class CommandLineEditor {
public:
    CommandLineEditor();
    void setSpecialKeyHandler(SpecialKeyHandler* handler);
    bool getLineFromCli(std::string& line);

private:
    std::string buffer;
    int cursorPosition;
    SpecialKeyHandler* specialKeyHandler;
};

#endif


