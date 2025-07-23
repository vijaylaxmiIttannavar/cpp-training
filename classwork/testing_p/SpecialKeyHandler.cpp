/*

#include "SpecialKeyHandler.h"
#include "SystemInterface.h"

bool SpecialKeyHandler::handleSpecialKey(const check_SKey& key, std::string& inputBuffer) {
    switch (key.sKey) {
    case SpecialKey::F1:
        SystemInterface::printString("RUN\n");
        inputBuffer = "RUN";
        return true;
    case SpecialKey::F2:
        SystemInterface::printString("LIST\n");
        inputBuffer = "LIST";
        return true;
    case SpecialKey::F3:
        SystemInterface::printString("NEW\n");
        inputBuffer = "NEW";
        return true;
    case SpecialKey::F4:
        SystemInterface::printString("LOAD\"\n");
        inputBuffer = "LOAD\"";
        return true;
    case SpecialKey::F5:
        SystemInterface::printString("SAVE\"\n");
        inputBuffer = "SAVE\"";
        return true;
    case SpecialKey::F6:
        SystemInterface::printString("CONT\n");
        inputBuffer = "CONT";
        return true;
    case SpecialKey::F7:
        SystemInterface::printString("LPT1\n");
        inputBuffer = "LPT1";
        return true;
    case SpecialKey::F8:
        SystemInterface::printString("TRON\n");
        inputBuffer = "TRON";
        return true;
    case SpecialKey::F9:
        SystemInterface::printString("TROFF\n");
        inputBuffer = "TROFF";
        return true;
    case SpecialKey::F10:
        SystemInterface::printString("KEY\n");
        inputBuffer = "KEY";
        return true;
    default:
        return false;
    }
}  */
/*
#include "SpecialKeyHandler.h"
#include "SystemInterface.h"

bool SpecialKeyHandler::handleSpecialKey(const check_SKey& key, std::string& inputBuffer) {
    switch (key.sKey) {
    case SpecialKey::F1:  inputBuffer = "RUN";   break;
    case SpecialKey::F2:  inputBuffer = "LIST";  break;
    case SpecialKey::F3:  inputBuffer = "NEW";   break;
    case SpecialKey::F4:  inputBuffer = "LOAD\""; break;
    case SpecialKey::F5:  inputBuffer = "SAVE\""; break;
    case SpecialKey::F6:  inputBuffer = "CONT";  break;
    case SpecialKey::F7:  inputBuffer = "LPT1";  break;
    case SpecialKey::F8:  inputBuffer = "TRON";  break;
    case SpecialKey::F9:  inputBuffer = "TROFF"; break;
    case SpecialKey::F10: inputBuffer = "KEY";   break;
    default: return false;
    }

    SystemInterface::printString(inputBuffer + "\n");
    return true;
}  */

#include "SpecialKeyHandler.h"
#include "SystemInterface.h"

bool SpecialKeyHandler::handleSpecialKey(const check_SKey& key, std::string& inputBuffer) {
    switch (key.sKey) {
    case SpecialKey::F1:
        SystemInterface::printString("RUN\n");
        inputBuffer = "RUN";
        return true;
    case SpecialKey::F2:
        SystemInterface::printString("LIST\n");
        inputBuffer = "LIST";
        return true;
    case SpecialKey::F3:
        SystemInterface::printString("NEW\n");
        inputBuffer = "NEW";
        return true;
    case SpecialKey::F4:
        SystemInterface::printString("LOAD\"\n");
        inputBuffer = "LOAD\"";
        return true;
    case SpecialKey::F5:
        SystemInterface::printString("SAVE\"\n");
        inputBuffer = "SAVE\"";
        return true;
    case SpecialKey::F6:
        SystemInterface::printString("CONT\n");
        inputBuffer = "CONT";
        return true;
    case SpecialKey::F7:
        SystemInterface::printString("LPT1\n");
        inputBuffer = "LPT1";
        return true;
    case SpecialKey::F8:
        SystemInterface::printString("TRON\n");
        inputBuffer = "TRON";
        return true;
    case SpecialKey::F9:
        SystemInterface::printString("TROFF\n");
        inputBuffer = "TROFF";
        return true;
    case SpecialKey::F10:
        SystemInterface::printString("KEY\n");
        inputBuffer = "KEY";
        return true;
    default:
        return false;
    }
}

