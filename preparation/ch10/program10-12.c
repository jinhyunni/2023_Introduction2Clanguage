#include <stdio.h>
#include <ctype.h>	//toupper(); tolower();

int main()
{
	char s[100], *p;
	int i;
	printf("문자열을 입력하세요: ");
	fgets(s, 100, stdin);	//fgets 함수
	printf("\n");
	

	p=s;	//포인터에 문자열의 첫 시작 원소의 주소를 입력, 반복 인자의 초기화!

	while(*p != 0)	//null문자를 만나기 전까지, 반복 정지조건!
	{
		*p = toupper(*p);	//toupper(p)	-> 문자가 아니라 주소를 넘겨주는 것! 따라서 오류
		p++;	//문자열의 다음 원소, 반복 인자의 증가!
	}

	printf("Change into upper case: %s\n", s);

	p=s;	//다시 포인터를 문자열의 시작원소를 가리키게 한다, 반복 인자의 초기화!

	while(*p != 0)	//null 문자를 만나기 전까지 반복 실행, 반복 정지조건!
	{
		*p = tolower(*p);
		p++;	//문자열의 다음 문자, 반복 인자의 조건!
	}

	printf("Change into lower case: %s\n", s);

	return 0;

}
