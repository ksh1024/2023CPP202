#include <stdio.h> 
#include <string.h> //문자열 함수가 들어있음

int main() {
	char str1[30] = "";
	char str2[30] = "Jiwoo";

	strcpy(str1,str2); //str1에 str2내용을 넣음
	printf("%s \n", str1);

	return 0;
}