#pragma once

#include "Hero.hpp"
#include "AbilityMagician.hpp"

class HeroMagician : public Hero
{
  public:
    HeroMagician(std::string name, std::string aparience, int experience, int level, std::string type)
      : Hero(name, aparience, experience, level), 
        magiciantype(type) 
    {
      ability = new AbilityMagician(8, 9, 10, 11);
    }

    Hero* clone() override { return new HeroMagician(*this);}

    Ability* getAbility() override { return ability;}

  private:
    std::string magiciantype;
    AbilityMagician* ability;

};
