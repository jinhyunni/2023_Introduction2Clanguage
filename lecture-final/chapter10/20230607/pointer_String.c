#include <stdio.h>

int main()
{
	char *str = "langauge";
	int i;
	
	while(*str != '\0')
	{
		printf("%c", *str);
		/*
		
		   printf("%c\n", *str); -> 반환값이 포인터에 들어있는 원소!(역참조연산자 *를 사용!)
		   -> str 포인터가 가리키는 주소에 들어어있는 
		   char type의 원소를 출력하라!

		   printf("%s\n", str);	-> 반환값이 포인터의 주소!
		   -> 포인터가 가리키는 주소부터 \0이 나올때까지 출력하라!

		   */
		str++;
	}

	
	return 0;	
}
