#include <stdio.h>

/*
	2차원 문자열 포인터 배열과 2차원 정수형 포인터 배열은 선언 방식이 다르다! 
*/

int main()
{
	int array[][3]={{10, 20, 30}, {40, 50, 60}};
	int *p = array[0]; //정수형 2차원 포인터 배열 선언 방법 
	
	int i, j;
	
	for(i=0; i<6; i++)
	{
		printf("*(p+%d)=%d\n", i, *(p+i)); 
	}	
} 
