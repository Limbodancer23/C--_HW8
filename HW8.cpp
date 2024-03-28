
#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Frog.h"
using namespace std;
int main()
{


    Animal* a = new Animal();
   //a->Voice();
    Animal* d = new Dog();
    //d->Voice();
    Animal* cat = new Cat();
    //cat->Voice();
    Animal* frog = new Frog();
    //frog->Voice();

    Animal* arr[4]{ a,d,cat,frog };
    for (size_t i = 0; i < 4; i++)
    {
        arr[i]->Voice();
    }
}
