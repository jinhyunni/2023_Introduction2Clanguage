#include <stdio.h>

int main(void)
{
	char arr2[][5]={"Jack", "John", "Mike", "Kane", "July", "Poly"};
	int num[][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	//char-type array pointer
	char (*p)[5] = arr2;	//char 2차원 배열의 첫번째 행을 가리킴, 가리키는 대상: 크기 5의 1차원 문자열!
	//int-type array pointer
	int (*np)[3] = num;		//int 2차원 배열의 첫번째 행을 가리킴, 가리키는 대상: 숫자 3개로 이루어진 1차원 배열!
	int i, j;

	//포인터를 이용해서 2차원 문자열의 각 행을 출력하기
	for(i=0; i<6; i++)
			printf("p+%d = %s\n", i, p+i);

	//포인터를 이용해서 2차원 정수 배열의 각 행의 원소들을 출력하기
	for(i=0; i<3; i++)
	{	
		printf("[");
		for(j=0; j<3; j++)
		{
			printf("%4d", *(*(np+i)+j));
		}
		printf("]\n");
	}

}
