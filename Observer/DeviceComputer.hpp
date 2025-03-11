#pragma once

#include <iostream>
#include "IObserver.hpp"
#include "MessagePublisher.hpp"

class DeviceComputer : public IObserver
{
    public:

        void do_something() {}

        std::string get_name() {return "computer";}

        void update(const std::string& message) override
        {
            std::cout << "Device " << get_name() << " message received: " << message << std::endl;
        }
};