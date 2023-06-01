#include <stdio.h>

//gets: 문자열 전용 입력함수
//맥 환경에서는 gets 대신에 fgets 함수를 사용한다.
//엔터키 입력 전까지의 모든 문자를 배열에 저장한다.
//즉, \0 문자를 문자열의 끝으로 보는 것이 아니라 \n을 문자열의 끝으로 본다.

int main()
{
	char name[14];
	
	gets(name);

	printf("input by gets function: %s\n", name);

	return 0;
}
