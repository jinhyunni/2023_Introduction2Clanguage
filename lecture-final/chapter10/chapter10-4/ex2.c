#include <stdio.h>
#include <string.h>		//strlen(문자열): 문자열의 길이를 반환하는 함수

int main()
{	
	char *p="C Language";		//포인터가 문자열을 가리키게 함!
	int i;

	printf("strlen(p)=%d\n", strlen(p));	//null문자를 제외한 길이를 반환

	//포인터를 이용해서 문자열 출력하기
	for(i=0; i<strlen(p)+1; i++)
	{
		printf("*(p+%d)=%c\n", i, *(p+i));
	}
	
	printf("\n");
	printf("sizeof(p)=%d\n", sizeof(p));	//포인터 변수에 배당된 바이트!
	printf("*(p+2)=%c, size=%d\n", *(p+2), sizeof(*(p+2)));
	
	return 0;
}
