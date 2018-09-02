#include "Coke.h"

Coke::Coke()
{
    //ctor
}

void Coke::setSize(string Size__)
{
 Size_ = Size__;
}
  void Coke::Print()
  {

      cout<<Size_<<" Coke Ordered"<<endl;
  }

Coke::~Coke()
{
    //dtor
}
