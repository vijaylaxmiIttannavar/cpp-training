/*
#include "ScreenRenderer.h"
#include "SystemInterface.h"

void ScreenRenderer::redrawBuffer(const std::string& buffer, int cursorPosition) {
    SystemInterface::clearScreen();
    SystemInterface::printString("> ");
    SystemInterface::printString(buffer.c_str());

    // Move cursor to correct position (after prompt)
    SystemInterface::moveCursor(2 + cursorPosition, 0); // 2 for "> "
}
*/
/**
#include "ScreenRenderer.h"
#include "SystemInterface.h"

void ScreenRenderer::moveCursor(int pos) {
    // Move to beginning, then right `pos` times
    SystemInterface::putChar('\r');
    for (int i = 0; i < pos; ++i)
        SystemInterface::putChar(' ');
    SystemInterface::putChar('\r'); // Return to start
    for (int i = 0; i < pos; ++i)
        SystemInterface::putChar('\x1B[C'); // Move right
}

void ScreenRenderer::redrawBuffer(const std::string& buffer, int cursorPos) {
    SystemInterface::putChar('\r');
    SystemInterface::printString(buffer.c_str());
    SystemInterface::printString(" \r");  // Erase trailing char
    for (int i = 0; i < cursorPos; ++i)
        SystemInterface::putChar('\x1B[C');
}  */

#include "ScreenRenderer.h"
#include "SystemInterface.h"

void ScreenRenderer::moveCursor(int pos) {
    SystemInterface::putChar('\r'); // Return to start
    for (int i = 0; i < pos; ++i)
        SystemInterface::printString("\x1B[C"); // Move right
}

void ScreenRenderer::redrawBuffer(const std::string& buffer, int cursorPos) {
    SystemInterface::putChar('\r');
    SystemInterface::printString(buffer.c_str()); // FIX: Use c_str()
    SystemInterface::printString(" \r");  // Erase trailing char
    for (int i = 0; i < cursorPos; ++i)
        SystemInterface::printString("\x1B[C"); // Move right using escape sequence
}

