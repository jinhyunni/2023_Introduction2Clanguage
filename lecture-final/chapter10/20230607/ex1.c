#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s[100], *p;
	int i;
	
	printf("문자열을 입력하세요: ");
	gets(s);	//문자열을 입력받는 함수! 
	
	p=s;	//포인터가 문자열을 공유하기 시작!
	
	while(*p != '\0')
	{
		*p=toupper(*p);	//포인터 p가 가리키고 있는 문자를 대문자로! 배열의 내용도 바뀐다! 
		p++;	
	}
	
	p=s;
	
	printf("\n대문자로 변환한 결과; %s\n", s);
	 
	for(i=0; i<strlen(s); i++)
	{
		s[i]=tolower(s[i]);
	}
	
	printf("\n소문자로 변환한 결과: %s\n", s);
	
	
}
