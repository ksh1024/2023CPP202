#include <iostream>
using namespace std;

class Animal {
public:
	void bark() {

	}
private:
	int leg_num_;

};

class Dog : public Animal{
public:
	void bark() {
		cout << "港港" << endl;
	}

private:
	int speed;
};

class Cat : public Animal {
public:
	void bark() {
		cout << "具克" << endl;
	}
private:
	int claw;
};

int main() {
	Animal a;
	Dog poppi;
	Cat navi;
		
	a.bark();
	poppi.bark();
	navi.bark();

	return 0;
}