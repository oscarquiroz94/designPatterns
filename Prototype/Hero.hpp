#pragma once

#include <string>
#include "Ability.hpp"

class Hero
{
  public:
    Hero(std::string name, std::string aparience, int experience, int level)
      : _name(name), _aparience(aparience), _experience(experience), _level(level) {}

    virtual Hero* clone() = 0;
    virtual Ability* getAbility() = 0;

    std::string getName() const { return _name; }
    std::string getAparience() const { return _aparience;}
    int getExperience() const { return _experience; }
    int getLevel() const { return _level; }

    void setName(std::string name) { this->_name = name; }
    void setAparience(std::string aparience) { this->_aparience = aparience;}

    virtual ~Hero() = default;

  protected:
    std::string _name;
    std::string _aparience;
    int _experience;
    int _level;
};