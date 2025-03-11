#include "TextEditor.hpp"
#include "BackupManager.hpp"

int main()
{
    
    TextEditor editor;
    BackupManager historico(&editor);

    editor.overridetext("inicio, ");
    historico.backup();

    editor.appendtext("habia una vez, ");
    historico.backup();

    editor.appendtext("en algun lugar de la mancha.");
    historico.undo();
    
    editor.appendtext("en algun lugar de Hispania.");
    historico.backup();
    
    historico.showhistory();

    return 0;
}