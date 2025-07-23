/*#ifndef SCREENRENDERER_H
#define SCREENRENDERER_H

#include <string>

class ScreenRenderer {
public:
    static void redrawBuffer(const std::string& buffer, int cursorPosition);
    static void moveCursor(int position);
};

#endif // SCREENRENDERER_H   */


#pragma once
#include <string>

class ScreenRenderer {
public:
    static void moveCursor(int pos);  // cursor position in current line
    static void redrawBuffer(const std::string& buffer, int cursorPos);
};

