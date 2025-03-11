#pragma once

#include "Hero.hpp"
#include "AbilityArcher.hpp"

class HeroArch : public Hero
{
  public:
    HeroArch(std::string name, std::string aparience, int experience, int level, std::string type)
      : Hero(name, aparience, experience, level), 
        arctype(type) 
    {
      ability = new AbilityArcher(1, 2, 3, 4);
    }

    Hero* clone() override { return new HeroArch(*this);}

    Ability* getAbility() override { return ability;}

    ~HeroArch() { delete ability;}

  private:
    std::string arctype;
    AbilityArcher* ability;
};
