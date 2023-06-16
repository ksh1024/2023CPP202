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
		cout << "이름 : " << name_ << endl;
		cout << "학번 : " << hakbun_<< endl;
		
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
		cout << "대학 : " <<university_ << endl;
	}
private:
	string university_;
};


int main() {
	Student* student = new Student("김미림", 2203, "서울대");
	student->PrintShow();
	return 0;
}