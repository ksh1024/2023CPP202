#include <iostream>

using namespace std;

template <typename T>

class Character {
public:
	Character(string name, T health, T attack, T protect) :
		name_(name), health_(health), attack_(attack), protect_(protect) {}

	void Print() {
		cout << "�̸� : " << name_ << "\nü�� : " << health_ <<
			"\n���� : " << attack_ << "\n��� : " << protect_ << endl;
	}

	string name_;
	T health_;
	T attack_;
	T protect_;

};

int main() {
	//Character* character = new Character("ĳ����", 100, 30, 20);
	Character<int> character = Character<int>("ĳ����",100,30,20);
	character.Print();
}
