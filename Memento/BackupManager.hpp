#pragma once

#include <vector>
#include <iostream>
#include "Snapshot.hpp"
#include "TextEditor.hpp"

class BackupManager
{
    public:

        BackupManager(TextEditor* edit) : editor(edit) {}

        void backup()
        {
            history.push_back(editor->save());
        }

        void undo()
        {
            if (history.empty()) return;
            Snapshot* snap = history.back();
            history.pop_back();
            editor->restore(snap);
        }

        void showhistory()
        {
            std::cout << "List of snapshots:\n";
            for (auto const& snap : history)
                std::cout << snap->getText() << std::endl;
        }

    private:
        std::vector<Snapshot*> history;
        TextEditor* editor;
};
