#include <iostream>
#include "HeroArcher.hpp"
#include "HeroInfantry.hpp"
#include "HeroMagician.hpp"

void printHero(Hero* hero)
{
    std::cout << "Name: " << hero->getName() << std::endl;
    std::cout << "Aparience: " << hero->getAparience() << std::endl;
    std::cout << "Experience: " << hero->getExperience() << std::endl;
    std::cout << "Level: " << hero->getLevel() << std::endl;
}

void printArcherAbility(Hero* hero)
{
    HeroArch* heroarcher = static_cast<HeroArch*>(hero);
    std::cout << "Attack: " << heroarcher->getAbility()->getAttack() << std::endl;
    std::cout << "Defense: " << heroarcher->getAbility()->getDefense() << std::endl;
    std::cout << "Velocity: " << heroarcher->getAbility()->getVelocity() << std::endl;
    AbilityArcher* ability = static_cast<AbilityArcher*>(heroarcher->getAbility());
    std::cout << "Range: " << ability->getRange()<< std::endl;
}

void printInfantryAbility(Hero* hero)
{
    HeroInfantry* heroinfantry = static_cast<HeroInfantry*>(hero);
    std::cout << "Attack: " << heroinfantry->getAbility()->getAttack() << std::endl;
    std::cout << "Defense: " << heroinfantry->getAbility()->getDefense() << std::endl;
    std::cout << "Velocity: " << heroinfantry->getAbility()->getVelocity() << std::endl;
    AbilityInfantry* ability = static_cast<AbilityInfantry*>(heroinfantry->getAbility());
    std::cout << "Hardness: " << ability->getHardness()<< std::endl;
}

void printMagicianAbility(Hero* hero)
{
    HeroMagician* heromagician = static_cast<HeroMagician*>(hero);
    std::cout << "Attack: " << heromagician->getAbility()->getAttack() << std::endl;
    std::cout << "Defense: " << heromagician->getAbility()->getDefense() << std::endl;
    std::cout << "Velocity: " << heromagician->getAbility()->getVelocity() << std::endl;
    AbilityMagician* ability = static_cast<AbilityMagician*>(heromagician->getAbility());
    std::cout << "Invisibility: " << ability->getInvisibility() << std::endl;
}

int main()
{
    Hero* archer_1 = new HeroArch("Legolas", "Elf", 100, 10, "Beginner");
    printHero(archer_1);
    printArcherAbility(archer_1);
    std::cout << "-----------\n";

    Hero* archer_2 = archer_1->clone();
    printHero(archer_2);
    printArcherAbility(archer_2);
    std::cout << "-----------\n";
    
    Hero* infantry_1 = new HeroInfantry("Aragorn", "Human", 200, 20, "Knight");
    printHero(infantry_1);
    printInfantryAbility(infantry_1);
    std::cout << "-----------\n";

    Hero* magician_1 = new HeroMagician("Mystery", "Marcian", 250, 10, "Dark");
    magician_1->setName("Zeuss");
    magician_1->setAparience("Human");
    printHero(magician_1);
    printMagicianAbility(magician_1);
    std::cout << "-----------\n";

    delete archer_1;
    delete archer_2;
    delete infantry_1;
    delete magician_1;
    
    return 0;
}