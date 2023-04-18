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
		cout << "�̸� : " << name_ << "\n��� : " << id_ << "\n���� : " << age_ <<"\n�޿� : " << salary_<<"\n" << endl;
	}
private:
	string name_;	 // �̸�
	int id_;       	 // ���
	int age_;        // ����
	double salary_;	 // �޿�
};

int main() {
	Employee* a = new  Employee("��̸�", 2219, 20, 300.0);
	a->PrintInfo(); 
	delete a;

	Employee* b = new Employee[2];
	b[0].set_name("���ϴ�");
	b[0].set_id(1212);
	b[0].set_age(24);
	b[0].set_salary(250.0);

	b[1].set_name("���ٴ�");
	b[1].set_id(3220);
	b[1].set_age(32);
	b[1].set_salary(220.0);

	for (int i = 0; i <= 1; i++) {
		b[i].PrintInfo();
	}
	delete[] b;

	return 0;
}