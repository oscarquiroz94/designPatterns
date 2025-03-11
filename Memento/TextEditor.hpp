#pragma once

#include <chrono>
#include <iomanip>
#include <sstream>
#include <string>
#include <iostream>
#include "Snapshot.hpp"
#include "SnapshotText.hpp"

class TextEditor
{
    public:
        void overridetext(std::string txt)
        {
            text = txt;
            std::cout << printCurrentTime() << " - current text: " << text << std::endl;
        }

        void appendtext(std::string txt)
        {
            text += txt;
            std::cout << printCurrentTime() << " - current text: " << text << std::endl;
        }

        Snapshot* save()
        {
            return new SnapshotText(text);
        }

        void restore(Snapshot* snp)
        {
            text = snp->getText();
        }
        

    private:
        std::string text;

        std::string printCurrentTime()
        {
            auto now = std::chrono::system_clock::now();
            auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
            std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
            std::tm* tm = std::localtime(&currentTime);

            std::ostringstream oss;
            oss << std::put_time(tm, "%Y-%m-%d %H:%M:%S");
            oss << '.' << std::setfill('0') << std::setw(3) << milliseconds.count();
            return oss.str();
        }
};
