#include <stdio.h>

int main()	
{
	//char type pointerArray
	char *str[4]={"Korea", "Japan", "China", "Usa"};	//연산자 우선순위: [] 가 *보다 앞선다
	//int type pointerArray
	
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	int n4 = 4;

	int *num[4]={&n1, &n2, &n3, &n4};
	
	int **pnum = num;	//포인터 배열의 첫번째 주소를 가리키는 포인터!

	int i, j;	//for iteration
	
	
	printf("====Printing out char-type pointer Array====\n");

	for(i=0; i<4; i++)
		printf("*(str+%d)=%s\n", i, *(str+i));
	printf("\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("*(*(str+%d)+%d)=%c\n", i, j, *(*(str+i)+j));
		}
	}

	printf("\n====Printing out int-type pointer array====\n");
	for(i=0; i<4; i++)
	{
		printf("num[%d] = %x, *num[%d] = %d\n", i, num[i], i, *num[i]);
	}

	printf("\n++++In Pointer Form++++\n");
	for(i=0; i<4; i++)
	{
		printf("*(pnum+%d) = %x, **(pnum+%d) = %d\n", i, *(pnum+i), i, **(pnum+i));
	}
}
