#pragma once

#include "Ability.hpp"

class AbilityInfantry : public Ability
{
  public:
    AbilityInfantry(int attack, int defense, int velocity, int hardness)
      : Ability(attack, defense, velocity), _hardness(hardness) {}

    int getHardness() const { return _hardness; }
  
  protected:
    int _hardness;
};
