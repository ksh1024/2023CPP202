#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(int age, string name):age_(age),name_(name) {
		cout << "동물 생성자" << endl;
	}
	//소멸자에는 무조건 virtual을 넣자(메모리 누수 방지)
	virtual ~Animal() {
		cout << "동물 소멸자" << endl;
	}
	//동적 바인딩 (가상함수)
	//동물은 추상적인 존재이므로 함수의 구체적인 구현(정의)는 자식클래스에서 진행
	virtual void Bark() = 0;
	virtual void Eat() = 0;
	virtual void Hunt() = 0;
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
	virtual ~Crane() {
		cout << "두루미 소멸자" << endl;
	}
	//오타같은 실수를 방지하지 위해 override 키워드를 사용(Java의 @Override)
	void Bark() override {cout << "두루두루" <<endl;}
	//순수가상함수(추상메소드)는 반드시 자식에서 구현해야 한다
	void Eat() override {}
	void Hunt() override {}
private:
	int leg_length_;
};


int main() {
	//추상클래스(하나라도 추상메소드가 존재하는 클래스)는 객체(인스턴스)를 만들 수 없다
	//Animal* animal = new Animal(1,"1");

	Animal* animal= new Crane(3, "지우",108);
	animal->Bark();	//두루두루 (정적 바인딩으로 인해 부모의 멤버함수를 호출)
	delete animal;
	return 0;
}