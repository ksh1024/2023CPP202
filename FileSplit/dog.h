#pragma once
#include <iostream>
#include "animal.h"
using namespace std;

class Dog : public Animal {
public:
	void bark() {
		cout << "¸Û¸Û" << endl;
	}

private:
	int speed;
};
