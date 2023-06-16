#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(int age, string name):age_(age),name_(name) {
		cout << "동물 생성자" << endl;
	}
	~Animal() {
		cout << "동물 소멸자" << endl;
	}

	virtual void Bark() { 
		cout << "동물 짖는다" << endl;
	}
	virtual void Eat() {
		cout << "동물 먹는다" << endl;
	}
	virtual void Hunt() {
		cout << "동물 사냥한다" << endl;
	}
private:
	int age_;
	string name_;

};


class Crane : public Animal{
public:
	Crane(int age, string name,int len_length) : Animal(age,name) {
		cout << "두루미 생성자" << endl;
		leg_length_ = len_length;
	}
	~Crane() {
		cout << "두루미 소멸자" << endl;
	}
	//오타같은 실수를 방지하지 위해 override 키워드를 사용(Java의 @Override)
	void Bark() override {
		cout << "두루두루" <<endl;
	}
private:
	int leg_length_;
};


int main() {
	Animal* animal= new Crane(3, "지우",108);
	animal->Bark();	//두루두루 (정적 바인딩으로 인해 부모의 멤버함수를 호출)
	delete animal;
	return 0;
}