//C
#include<stdio.h>
#include<string.h>

//C++
#include<iostream>
#include<string>

using namespace std;

int main() {
	string str1 = "hello";
	string str2 = "world"; //hello와 world중 world가 더 큰값

	if (str1 == str2) {
		cout<<"str1 == str2";
	}
	//str2가 str1보다 사전(dictionary)에 늦게 나오는 경우
	else if (str1< str2) {
		cout << "str1 < str2";
	}
	else {
		cout << "str1 > str2";
	}

	return 0;
}
