/*#include "CommandLineEditor.h"
#include "ScreenRenderer.h"
#include "SpecialKeyHandler.h"

CommandLineEditor::CommandLineEditor()
    : cursorPosition(0), specialKeyHandler(nullptr) {}

void CommandLineEditor::setSpecialKeyHandler(SpecialKeyHandler* handler) {
    specialKeyHandler = handler;
}

bool CommandLineEditor::getLineFromCli(std::string& line) {
    buffer.clear();
    cursorPosition = 0;

    while (true) {
        check_SKey evt = SystemInterface::readKey();

        if (evt.isSpecial) {
            if (specialKeyHandler && specialKeyHandler->handleSpecialKey(evt, buffer))
                break;  // buffer was set (like buffer = "RUN"), now return

            switch (evt.sKey) {
            case SpecialKey::LEFT:
                if (cursorPosition > 0) {
                    cursorPosition--;
                    ScreenRenderer::moveCursor(cursorPosition);
                }
                break;
            case SpecialKey::RIGHT:
                if (cursorPosition < buffer.length()) {
                    cursorPosition++;
                    ScreenRenderer::moveCursor(cursorPosition);
                }
                break;
            case SpecialKey::ESC:
            case SpecialKey::CTRL_Z:
                return false;
            default:
                break;
            }
        }
        else {
            char c = evt.ch;
            if (c == '\b' && cursorPosition > 0) {
                buffer.erase(--cursorPosition, 1);
                ScreenRenderer::redrawBuffer(buffer, cursorPosition);
            }
            else if (c == '\r') {
                SystemInterface::putChar('\n');
                break;
            }
            else {
                buffer.insert(buffer.begin() + cursorPosition, c);
                ++cursorPosition;
                ScreenRenderer::redrawBuffer(buffer, cursorPosition);
            }
        }
    }

    line = buffer;
    return true;
} */
/*
#include "CommandLineEditor.h"
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"
#include "ScreenRenderer.h"


CommandLineEditor::CommandLineEditor()
    : buffer(""), cursorPosition(0), specialKeyHandler(nullptr) {}

void CommandLineEditor::setSpecialKeyHandler(SpecialKeyHandler* handler) {
    specialKeyHandler = handler;
}
/*
bool CommandLineEditor::getLineFromCli(std::string& line) {
    buffer.clear();
    cursorPosition = 0;

    while (true) {
        check_SKey key = SystemInterface::readKey();

        if (key.isSpecial) {
            // Let SpecialKeyHandler process F1–F10, etc.
            if (specialKeyHandler && specialKeyHandler->handleSpecialKey(key, buffer)) {
                // Print newline and return if a full command was injected
                SystemInterface::putChar('\n');
                line = buffer;
                return true;
            }

            if (key.sKey == SpecialKey::CTRL_C || key.sKey == SpecialKey::ESC) {
                return false;
            }

        }
        else {
            char ch = key.ch;
            if (ch == '\r' || ch == '\n') {
                SystemInterface::putChar('\n');
                line = buffer;
                return true;
            }
            else if (ch == '\b') {
                if (cursorPosition > 0) {
                    buffer.erase(buffer.begin() + cursorPosition - 1);
                    cursorPosition--;
                    SystemInterface::putChar('\b');
                    SystemInterface::putChar(' ');
                    SystemInterface::putChar('\b');
                }
            }
            else {
                buffer.insert(buffer.begin() + cursorPosition, ch);
                cursorPosition++;
                SystemInterface::putChar(ch);
            }
        }
    }
}  */
/**
bool CommandLineEditor::getLineFromCli(std::string& line) {
    buffer.clear();
    cursorPosition = 0;

    while (true) {
        check_SKey key = SystemInterface::readKey();

        if (key.isSpecial) {
            if (specialKeyHandler && specialKeyHandler->handleSpecialKey(key, buffer)) {
                SystemInterface::putChar('\n');
                line = buffer;
                return true;
            }

            switch (key.sKey) {
            case SpecialKey::LEFT:
                if (cursorPosition > 0) {
                    cursorPosition--;
                    ScreenRenderer::moveCursor(cursorPosition);
                }
                break;
            case SpecialKey::RIGHT:
                if (cursorPosition < buffer.size()) {
                    cursorPosition++;
                    ScreenRenderer::moveCursor(cursorPosition);
                }
                break;
            case SpecialKey::ESC:
            case SpecialKey::CTRL_C:
                return false;
            default:
                break;
            }
        }
        else {
            char ch = key.ch;
            if (ch == '\r' || ch == '\n') {
                SystemInterface::putChar('\n');
                line = buffer;
                return true;
            }
            else if (ch == '\b') {
                if (cursorPosition > 0) {
                    buffer.erase(buffer.begin() + cursorPosition - 1);
                    cursorPosition--;
                    ScreenRenderer::redrawBuffer(buffer, cursorPosition);
                }
            }
            else {
                buffer.insert(buffer.begin() + cursorPosition, ch);
                cursorPosition++;
                ScreenRenderer::redrawBuffer(buffer, cursorPosition);
            }
        }
    }
}  */

#include "CommandLineEditor.h"
#include "ScreenRenderer.h"
#include "SystemInterface.h"

CommandLineEditor::CommandLineEditor()
    : cursorPosition(0), specialKeyHandler(nullptr) {}

void CommandLineEditor::setSpecialKeyHandler(SpecialKeyHandler* handler) {
    specialKeyHandler = handler;
}

bool CommandLineEditor::getLineFromCli(std::string& line) {
    buffer.clear();
    cursorPosition = 0;

    while (true) {
        check_SKey key = SystemInterface::readKey();
        // Let SpecialKeyHandler process F1–F10, etc.
        if (key.isSpecial) {
            if (specialKeyHandler && specialKeyHandler->handleSpecialKey(key, buffer)) {
                SystemInterface::putChar('\n');
                line = buffer;
                return true;
            }

            switch (key.sKey) {
            case SpecialKey::LEFT:
                if (cursorPosition > 0) {
                    cursorPosition--;
                    ScreenRenderer::moveCursor(cursorPosition);
                }
                break;
            case SpecialKey::RIGHT:
                if (cursorPosition < buffer.size()) {
                    cursorPosition++;
                    ScreenRenderer::moveCursor(cursorPosition);
                }
                break;
            case SpecialKey::ESC:
            case SpecialKey::CTRL_C:
                return false;
            default:
                break;
            }
        }
        else {
            char ch = key.ch;
            if (ch == '\r' || ch == '\n') {
                SystemInterface::putChar('\n');
                line = buffer;
                return true;
            }
            else if (ch == '\b') {
                if (cursorPosition > 0) {
                    buffer.erase(buffer.begin() + cursorPosition - 1);
                    cursorPosition--;
                    ScreenRenderer::redrawBuffer(buffer, cursorPosition);
                }
            }
            else {
                buffer.insert(buffer.begin() + cursorPosition, ch);
                cursorPosition++;
                ScreenRenderer::redrawBuffer(buffer, cursorPosition);
            }
        }
    }
}


