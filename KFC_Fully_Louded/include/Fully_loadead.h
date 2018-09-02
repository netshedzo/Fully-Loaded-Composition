#ifndef FULLY_LOADEAD_H
#define FULLY_LOADEAD_H
///Step 1 #include
#include "Burger.h"
#include "Chicken.h"
#include "Chips.h"
#include "Coke.h"
#include "Soup.h"
#include <iostream>

using namespace std;
///step 2 call
class Burger;
class Chips;
class Coke;
class Soup;
class Chicken;


class Fully_loadead
{
    public:
        Fully_loadead();
        virtual ~Fully_loadead();
        Fully_loadead(const Fully_loadead& other);
        void setCoke(string size_) ;//agregation
        void printCoke();
    private: /// step 3 ingredients
        Burger* newBurger;
        Chips* newChips;
        Coke* newCoke;
        Soup* newSoup;
        Chicken* newChicken;
};

#endif // FULLY_LOADEAD_H
