//C
#include<stdio.h>
#include<string.h>

//C++
#include<iostream>
#include<string>

using namespace std;
int main() {
	string str1= "jiwoo";

	//str1.length()도 가능하나 size()를 권장
	cout<<"문자열의 길이는"<< str1.size()<<endl;

	return 0;
}