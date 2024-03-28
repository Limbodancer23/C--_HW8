#pragma once
#include "Animal.h"
using namespace std;
class Frog :
    public Animal
{
public:
    Frog() {};
    void Voice() {
        cout << "Frog says *ribbit*!" << endl;
    }
};

