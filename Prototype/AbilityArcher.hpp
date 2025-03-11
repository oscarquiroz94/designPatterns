#pragma once

#include "Ability.hpp"

class AbilityArcher : public Ability
{
  public:
    AbilityArcher(int attack, int defense, int velocity, int range)
      : Ability(attack, defense, velocity), _range(range) {}

    int getRange() const { return _range; }
  
  protected:
    int _range;
};
