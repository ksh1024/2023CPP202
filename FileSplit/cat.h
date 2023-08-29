#pragma once
#include <iostream>
#include "animal.h"

using namespace std;

class Cat : public Animal {
public:
void bark() {
		cout << "¾ß¿Ë" << endl;
	}
private:
	int claw;
};
