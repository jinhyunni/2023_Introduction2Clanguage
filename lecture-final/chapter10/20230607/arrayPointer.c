#include <stdio.h>

int main(void)
{

	char arr1[5]="Jack";	//1차원 char 형 배열: 1차원 문자열
	int num1[5]={1, 2, 3, 4, 5};	//1차원 int형 배열

	char arr2[][5]={"Jack", "John", "Mike", "Kane", "July", "Poly"};
	int num2[][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	

	//char-type array pointer
	char *cp1 = arr1;	//char 1차원 배열의 첫번째 원소를 가리킴: 가리키는 대상: char 형 변수!
	int *np1 = num1;	//int 1차원 배열의 첫번째 원소를 가리킴: 가리키는 대상: int형 변수!

	//char-type array pointer
	char (*cp2)[5] = arr2;	//char 2차원 배열의 첫번째 행을 가리킴, 가리키는 대상: 크기 5의 1차원 문자열!
	//int-type array pointer
	int (*np2)[3] = num2;		//int 2차원 배열의 첫번째 행을 가리킴, 가리키는 대상: 숫자 3개로 이루어진 1차원 배열!
	int i, j;

	//포인터를 이용해서 1차원 문자열의 각 문자를 출력하기
	for(i=0; i<5; i++)
	{	
		printf("arr1[%d]=%c\n", i, *cp1++);	//*cp++, *(cp+i)
	}

	//포인터를 이용해서 1차원 정수 배열의 각 원소를 출력하기
	for(i=0; i<5; i++)
	{
		printf("num1[%d]=%d\n", i, *(np1+i));
	}

	//포인터를 이용해서 2차원 문자열의 각 행을 출력하기
	for(i=0; i<6; i++)
			printf("p+%d = %s\n", i, cp2+i);

	//포인터를 이용해서 2차원 정수 배열의 각 행의 원소들을 출력하기
	for(i=0; i<3; i++)
	{	
		printf("[");
		for(j=0; j<3; j++)
		{
			printf("%4d", *(*(np2+i)+j));	//부분 배열명 -> 역시 주소!
		}
		printf("]\n");
	}

}
