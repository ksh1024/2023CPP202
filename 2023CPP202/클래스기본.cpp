//C++
#include<iostream>
#include<string>

using namespace std;

//여러 데이터들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
//class는 디폴트가 private (struct는 디폴트가 public)
class Student {
public:
	//생성자 (constructor) : 객체가 생성될 때 호출되는 함수
	//생성자는 반환형을 쓰지않는다. void쓸시 오류 발생
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다
	Student() {}

	Student(int _number, string _name, string _phone, string _major, string _address)
		//멤버변수 초기화. const/참조형 멤버변수 사용가능
		:number(_number),name(_name),phone(_phone),major(_major),address(_address)
	{
	}
	void set_number(int _number) {
		number = _number;
	}
	void set_name(string _name) {
		name = _name;
	}
	void set_phone(string _phone) {
		phone = _phone;
	}
	void set_major(string _major) {
		major = _major;
	}
	void set_address(string _address) {
		address = _address;
	}

	//class 멤버 함수를 가질 수 있다
	void print() {
		cout << "학번 : " << number << "\n이름 : " << name << "\n번호 : " << phone << endl;
		cout << "전공 : " << major << "\n주소 : " << address << endl;
	}
	// 성능 때문에 number를 문자열로 하지 않음
	//일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한 번에 할 수 있으나, 문자열은 글자 수만큼 반복하여 비교해야 한다
private:
	int number;
	string name;
	string phone;
	string major;
	string address;
};
int main(void)
{
	//매개변수 없는 생성자
	//Student a;
	//Student a = Student();
	//a.print();

	//정적할당 : 컴파일 시간에 메모리 크기가 결정
	//Student b = Student(2200,"김미림","010-2222-3333","디자인","경기도파주");
	//b.print();

	//Student c[2];
	//for (int i = 0; i <= 1; i++) {//sizeof(c)/sizeof(Student)
	//	c[i].print();
	//}

	//동적할당 : 실행시간(runtime)에 메모리 크기가 결정(메모리 heap영역)
	//동적할당된 변수는 포인터로 접근한다
	//Student* c = new Student(2219, "장원영", "010-2121-4343", "뉴미디어디자인", "부산");
	//c->print();   //c의 멤버는 ->로 접근
	//
	////동적할당 해제(안하면 메모리 누수현상이 발생)
	//delete c;

	Student* d = new Student[2];
	d[0].set_name("박진영");
	d[0].set_address("하늘아파트");
	d[0].set_number(3205);
	d[0].set_major("뉴미디어소프트웨어과");
	d[0].set_phone("010-3333-2222");

	d[1].set_name("선미");
	d[1].set_address("우주아파트");
	d[1].set_number(3211);
	d[1].set_major("뉴미디어소프트웨어과");
	d[1].set_phone("010-3439-2222");

	for (int i = 0; i <= 1; i++) {
		d[i].print(); //배열의 요소에 해당하는 객체는 멤버를 .으로 접근
	}
	delete[] d;

	return 0;
}