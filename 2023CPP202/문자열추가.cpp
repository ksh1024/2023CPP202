//C
#include<stdio.h>
#include<string.h>

//C++
#include<iostream>
#include<string>

using namespace std;
int main() {
	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	//str2의 문자열을 str1(목적지)에 추가함
	strcat(str1, str2);


	printf("%s", str1);

	return 0;
}