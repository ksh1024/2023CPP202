#include <iostream>

using namespace std;

int main() {
	int* arr = new int[4];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;

	//���� ������ ���ο� ������ �ֱ�
		//ũ�Ⱑ Ȯ��� �ӽð����� �����
	int* temp = new int[6];
		//���� �� ����
	for (int i = 0; i < 4; i++) {
		temp[i] = arr[i];
	}
	//���� ���� ����
	delete[] arr;
		//arr�� ���ο� ������ ����Ŵ
	arr = temp;
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr; // temp�� delete�ص� ��

	return 0;
}