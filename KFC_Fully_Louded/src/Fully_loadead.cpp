#include "Fully_loadead.h"

Fully_loadead::Fully_loadead()
{
    newCoke = new Coke;
    newChicken = new Chicken;
    newBurger = new Burger;
    newSoup = new Soup;
    newChips = new Chips;
}

Fully_loadead::~Fully_loadead()
{
    //dtor
}

 void Fully_loadead::setCoke(string size_)
 {
  newCoke->setSize(size_);
  /// ->
 }
 void Fully_loadead::printCoke()
 {
     newCoke->Print();
     /// ->
 }
Fully_loadead::Fully_loadead(const Fully_loadead& other)
{
    //copy ctor
}
