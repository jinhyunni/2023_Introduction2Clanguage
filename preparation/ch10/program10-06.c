#include <stdio.h>

#define SIZE 5

//포인터를 이용한 배열의 원소 참조방법

int main()
{
	int i, arr[SIZE]={1, 2, 3, 4, 5};
	int *p;
	
	p = arr; 	//포인터가 배열의 첫번째 원소를 가리킨다!

	//배열의 인덱스 사용하기

	printf("=====배열의 인덱스를 사용하여 배열의 원소 참조하기=====\n");
	for(i=0; i<SIZE; i++)
			printf("arr[%d] = %d\n", i, arr[i]);

	printf("\n");

	//포인터를 이용한 배열의 원소 참조방법
	printf("\n=====포인터를 이용한 배열의 원소 참조 1=====\n");
	for(i=0; i<SIZE; i++)
		printf("*(p+%d) = %d\n", i, *(p+i));

	printf("\n=====포인터를 이용한 배열의 원소참조 2=====\n");

	for(i=0; i<SIZE; i++)
		printf("*p++ = %d\n", *p++);

	p = arr; //포인터를 다시 배열의 첫 원소로 돌려놓는다.




	return 0;
}	
