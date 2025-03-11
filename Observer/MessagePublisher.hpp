#pragma once

#include <list>
#include <iostream>
#include "IObserver.hpp"

class MessagePublisher
{
    public:
        
        void attach(IObserver* obs)
        {
            listObservers.push_back(obs);
            std::cout << "Suscrito: " << obs->get_name() << std::endl;
        }

        void detach(IObserver* obs)
        {
            listObservers.remove(obs);
            std::cout << "Retirado: " << obs->get_name() << std::endl;
        }

        void notify()
        {
            for (auto const& obs : listObservers)
            {
                obs->update(message);
            }
        }

        void create_message(std::string msg)
        {
            message = msg;
            notify();
        }
    
    private:
        std::list<IObserver*> listObservers;
        std::string message;
};
