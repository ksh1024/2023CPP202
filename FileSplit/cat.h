#pragma once
#include "animal.h"

class Cat : public Animal {
public:
	void bark();
private:
	int claw;
};