//C++
#include<iostream>
#include<string>

using namespace std;

//여러 데이터들을 하나의 의미있는 구조체로 묶어서 관리
//구조체, 클래스는 일반적으로 단어의 첫 글자를 대문자로 합시다
//class는 디폴트가 private (struct는 디폴트가 public)
class Student {
	// 성능 때문에 number를 문자열로 하지 않음
	//일반적으로 문자열은 정수형 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한 번에 할 수 있으나, 문자열은 글자 수만큼 반복하여 비교해야 한다
public:
	int number;
	string name;
	string phone;
	string major;
	string address;

	void print() {
		cout << "학번 : " << number << "\n이름 : " << name << "\n번호 : " << phone << endl;
		cout << "전공 : " << major << "\n주소 : " << address << endl;
	}
};
int main() {
	//자료형 : Student(Student앞에 class 생략 가능) 
	Student a;
	a.number = 2222;
	a.name = "아이유";
	a.phone = "010-1234-1234";
	a.major = "뉴미디어소프트웨어";
	a.address = "관악구";

	a.print();


	return 0;
}
