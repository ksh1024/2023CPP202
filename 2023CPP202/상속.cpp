﻿#include <iostream>

using namespace std;

class Animal {
public:
	Animal() {
		cout << "동물 생성자" << endl;
	}
	~Animal() {
		cout << "동물 소멸자" << endl;
	}
	void Bark() { 
		cout << "동물 짖는다" << endl;
	}
	void Eat() {
		cout << "동물 먹는다" << endl;
	}
	void Hunt() {
		cout << "동물 사냥한다" << endl;
	}
private:
	int age_;
	int name_;

};


class Crane : public Animal{
public:
	//별도의 언급이 없어도 매개변수가 없는 부모생성자가 호출된다
	Crane() {
		cout << "두루미 생성자" << endl;
	}
	~Crane() {
		cout << "두루미 소멸자" << endl;
	}
private:
	int leg_length_;
};


int main() {
	Crane* crane = new Crane();

	delete crane;
	return 0;
}