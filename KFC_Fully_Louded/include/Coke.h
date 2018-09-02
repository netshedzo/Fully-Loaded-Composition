#ifndef COKE_H
#define COKE_H
#include <iostream>
 ///ingredient
using namespace std;

class Coke
{
    public:
        Coke();
        virtual ~Coke();
        void setSize(string Size_);
        void Print();
    protected:

    private:
        string Size_;
};

#endif // COKE_H
