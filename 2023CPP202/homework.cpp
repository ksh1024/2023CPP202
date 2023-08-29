#include <iostream>

using namespace std;

template <typename T>

class Character {
public:
	Character(string name, T health, T attack, T protect) :
		name_(name), health_(health), attack_(attack), protect_(protect) {}

	void Print() {
		cout << "이름 : " << name_ << "\n체력 : " << health_ <<
			"\n공격 : " << attack_ << "\n방어 : " << protect_ << endl;
	}

	string name_;
	T health_;
	T attack_;
	T protect_;

};

int main() {
	//Character* character = new Character("캐릭터", 100, 30, 20);
	Character<int> character = Character<int>("캐릭터",100,30,20);
	character.Print();
}
