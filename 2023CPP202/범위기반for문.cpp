#include <iostream>

using namespace std;

int main() {
	double arr[4] = { 1.1, 2.2, 3.3, 4.4 };

	//�������� a�� �ڷ����� int�̴�.
	auto a = 4;
	
	//x�� �ڷ����� double�� �ڵ�����
	for (auto x : arr) {
		cout << x << endl;
	}

}