#pragma once

#include "Ability.hpp"

class AbilityMagician : public Ability
{
  public:
    AbilityMagician(int attack, int defense, int velocity, int invisibility)
      : Ability(attack, defense, velocity), _invisibility(invisibility) {}

    int getInvisibility() const { return _invisibility; }
  
  protected:
    int _invisibility;
};
