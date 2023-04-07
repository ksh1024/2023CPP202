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
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다
	Student() {
		number = 2222;
		name = "아이유";
		phone = "010-1234-1234";
		major = "뉴미디어소프트웨어";
		address = "관악구";
	}

	Student(int _number, string _name, string _phone, string _major, string _address)
		//멤버변수 초기화. const/참조형 멤버변수 사용가능
		:number(_number),name(_name),phone(_phone),major(_major),address(_address)
	{
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
	Student a = Student();
	//a.print();

	Student b = Student(2200,"김미림","010-2222-3333","디자인","경기도파주");
	b.print();

	
	return 0;
}