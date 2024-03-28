#pragma once
#include "Animal.h"
using namespace std;
class Dog :
    public Animal
{
public:
    Dog() {};

    void Voice() {
        cout << "Dog says woof!" << endl;
    }
};

