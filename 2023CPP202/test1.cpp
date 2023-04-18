#include<iostream>
#include<string>

using namespace std;

class Employee {
public:
	Employee() {}

	Employee(string name, int id, int age, double salary) 
		:name_(name),id_(id),age_(age),salary_(salary)
	{
	}

	void set_name(string name) {
		name_ = name;
	}
	void set_id(int id) {
		id_ = id;
	}
	void set_age(int age) {
		age_ = age;
	}
	void set_salary(double salary) {
		salary_ = salary;
	}
   
	void PrintInfo() {
		cout << "이름 : " << name_ << "\n사번 : " << id_ << "\n나이 : " << age_ <<"\n급여 : " << salary_<<"\n" << endl;
	}
private:
	string name_;	 // 이름
	int id_;       	 // 사번
	int age_;        // 나이
	double salary_;	 // 급여
};

int main() {
	Employee* a = new  Employee("김미림", 2219, 20, 300.0);
	a->PrintInfo(); 
	delete a;

	Employee* b = new Employee[2];
	b[0].set_name("이하늘");
	b[0].set_id(1212);
	b[0].set_age(24);
	b[0].set_salary(250.0);

	b[1].set_name("강바다");
	b[1].set_id(3220);
	b[1].set_age(32);
	b[1].set_salary(220.0);

	for (int i = 0; i <= 1; i++) {
		b[i].PrintInfo();
	}
	delete[] b;

	return 0;
}