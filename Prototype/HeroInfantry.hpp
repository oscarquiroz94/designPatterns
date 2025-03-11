#pragma once

#include "Hero.hpp"
#include "AbilityInfantry.hpp"

class HeroInfantry : public Hero
{
  public:
    HeroInfantry(std::string name, std::string aparience, int experience, int level, std::string type)
      : Hero(name, aparience, experience, level), 
        infantrytype(type) 
    {
      ability = new AbilityInfantry(5, 6, 7, 8);
    }

    Hero* clone() override { return new HeroInfantry(*this);}

    Ability* getAbility() override { return ability;}

  private:
    std::string infantrytype;
    AbilityInfantry* ability;

};
