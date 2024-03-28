#pragma once
#include <iostream>
using namespace std;
class Animal
{
public:
	friend ostream& operator<<(ostream& os, Animal& a) {
		os << "This is " << "animal" << endl;
		return os;
	}
	Animal() {};
	virtual void Voice() {
		cout << "This base class." << endl;
	}


};
