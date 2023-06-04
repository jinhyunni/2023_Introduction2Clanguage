#include <stdio.h>
//배열을 이용한 문자열 처리
//배열을 이용하면 길이가 고정된 문자열을 출력할 수 있다.
int main()
{	
	int i;
	char seoul[6] = {'s', 'e', 'o', 'u', 'l'};	//문자열
	char busan[6] = "busan";	//문자열

	printf("%s\n", seoul);
	printf("%s\n", busan);
	printf("\n");

	for(i=0; i<6; i++)
	{
		printf("seoul[%d] = %c\n", i, seoul[i]);
	}
	printf("\n");

	for(i=0; i<6; i++)
	{
		printf("busan[%d] = %c\n", i, busan[i]);
	}

	return 0;
}
