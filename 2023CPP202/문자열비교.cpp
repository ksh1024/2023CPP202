//C
#include<stdio.h>
#include<string.h>

//C++
#include<iostream>
#include<string>

using namespace std;

int main() {
	char str1[50] = "hello";
	char str2[50] = "world"; //hello와world중 world가 더 큰값
	
	//문자열 비교(인자의 순서와 반환값이 헷갈림)
	int result = strcmp(str1, str2);
	if (result == 0) {
		printf("str1 == str2");
	}
	else if (result == -1) {
		printf("str1 < str2");
	}
	else if (result == 1) {
		printf("str1 > str2");
	}

	return 0;
}