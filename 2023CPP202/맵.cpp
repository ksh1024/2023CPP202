#include <iostream>
#include <map>
#include<string>

using namespace std;

int main() {

	//key : ���ڿ�, value : ����
	map<string, int> moving;

	moving["������"] = 1987;
	moving["�����"] = 2000;
	moving["����"] = 1959;
	
	cout << moving["�����"] << endl;


	map<string, int>::iterator iter;
	//map�� ������ ��� iterator�θ� �ݺ����� ����Ѵ�.
	for (iter = moving.begin(); iter != moving.end(); iter++) {
		cout << iter -> first << iter -> second << " ";
	}

	return 0;
}