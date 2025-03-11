#pragma once

class Ability
{
  public:
    Ability(int attack, int defense, int velocity)
      : _attack(attack), _defense(defense), _velocity(velocity) {}

    int getAttack() const { return _attack; }
    int getDefense() const { return _defense; }
    int getVelocity() const { return _velocity; }

  protected:
    int _attack;
    int _defense;
    int _velocity;
};
