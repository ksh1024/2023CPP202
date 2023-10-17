#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
	map<string, int> student;

	student["김미림"] = 2101;
	student["이하늘"] = 2102;
	student["한마음"] = 2103;

	map<string, int>::iterator iter;
	for (iter = student.begin(); iter != student.end(); iter++) {
		cout << iter->first << iter->second <<endl;
	}
}

#include<vector>
int main() {
	vector<string> str;
	str.push_back("첫번째 문자열");
	str.push_back("두번째 문자열");
	str.push_back("세번째 문자열");

	vector<string>::iterator iter;
	for (iter = str.begin(); iter != str.end(); iter++) {
		cout << *iter << endl;
	}
}