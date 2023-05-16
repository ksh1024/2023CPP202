#include <iostream>
#include <string.h>

using namespace std;

class Munja {
public:
	Munja(const char* jhqz) {
		//3 ("abc") + 1('\0')
		str_ = new char[strlen(jhqz) + 1]; //깊은 복사
		strcpy(str_, jhqz);
		cout << "일반생성자 호출" << endl;
	}
	~Munja() {
		delete[] str_;
		cout << "소멸자 호출" << endl;
	}
private:
	char* str_;
};

int main() {
	Munja m1 = Munja("abc"); //일번생성자 호출
	return 0;
}