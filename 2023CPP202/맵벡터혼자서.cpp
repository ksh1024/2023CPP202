#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
	map<string, int> student;

	student["��̸�"] = 2101;
	student["���ϴ�"] = 2102;
	student["�Ѹ���"] = 2103;

	map<string, int>::iterator iter;
	for (iter = student.begin(); iter != student.end(); iter++) {
		cout << iter->first << iter->second <<endl;
	}
}

#include<vector>
int main() {
	vector<string> str;
	str.push_back("ù��° ���ڿ�");
	str.push_back("�ι�° ���ڿ�");
	str.push_back("����° ���ڿ�");

	vector<string>::iterator iter;
	for (iter = str.begin(); iter != str.end(); iter++) {
		cout << *iter << endl;
	}
}