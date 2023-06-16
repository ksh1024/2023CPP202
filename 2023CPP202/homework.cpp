#include <iostream>
#include <string>

using namespace std;

class Person{
public:
	Person(string name, int hakbun) {
		name_ = name;
		hakbun_ = hakbun;
	}
	void PrintShow() {
		cout << "�̸� : " << name_ << endl;
		cout << "�й� : " << hakbun_<< endl;
		
	}
private:
	int hakbun_;
	string name_;

};


class Student : public Person {
public:
	Student(string name, int hakbun, string university) : Person(name, hakbun) {
		university_ = university;
	}
	void PrintShow() {
		Person::PrintShow();
		cout << "���� : " <<university_ << endl;
	}
private:
	string university_;
};


int main() {
	Student* student = new Student("��̸�", 2203, "�����");
	student->PrintShow();
	return 0;
}