#pragma once
#include "animal.h"

class Dog : public Animal {
public:
	void bark();

private:
	int speed;
};
