#pragma once

#include <string>
#include "Snapshot.hpp"

class SnapshotText : public Snapshot
{
    public:
        SnapshotText(std::string txt) : text(txt) {}
        
        std::string getText() override {return text;}
    
    private:
        std::string text;

};

