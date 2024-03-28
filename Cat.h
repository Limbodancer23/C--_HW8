#pragma once
#include "Animal.h"
using namespace std;
class Cat :
    public Animal
{
public:
    Cat() {};
    void Voice() {
        cout << "Cat says meow!" << endl;
    }
};