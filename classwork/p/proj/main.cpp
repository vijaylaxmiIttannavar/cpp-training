#include "gw_basic/ProgramInterface/CommandLineEditor.h"
#include "gw_basic/Storage/ProgramMemory.h"
#include "gw_basic/Parser/Parser.h"
#include "gw_basic/Runtime/StatementExecutor.h"
#include "gw_basic/ProgramInterface/SpecialKeyHandler.h"
#include "gw_basic/ProgramInterface/ScreenRenderer.h"

using namespace gw_basic;

int main() {
    // Instantiate core components
    ProgramMemory programMemory;
    Parser parser;
    StatementExecutor executor;
    SpecialKeyHandler specialKeyHandler;
    ScreenRenderer screenRenderer;

    // Launch REPL
    CommandLineEditor editor(programMemory, parser, executor, specialKeyHandler, screenRenderer);
    editor.run();

    return 0;
}
