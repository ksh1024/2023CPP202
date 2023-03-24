//C
#include<stdio.h>
#include<string.h>

//C++
#include<iostream>
#include<string>

using namespace std;
int main() {
	char str1[30] = "jiwoo";
	int len = 0;

	for (int i = 0; str1[i] != '\0'; i++) {
		len++;
	}

	printf("문자열의 길이는 %d \n", len);

	return 0;
}