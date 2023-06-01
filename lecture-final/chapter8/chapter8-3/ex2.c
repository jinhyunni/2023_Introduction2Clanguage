#include <stdio.h>

void swap(int*, int*);

int main()
{
	int a=10, b=20;

	printf("Before swap\n");
	printf("a=%d, b=%d\n\n", a, b);

	swap(&a, &b);	//a와 b 변수의 주소를 넘겨준다.

	printf("After swap\n");
	printf("a=%d, b=%d\n", a, b);

}

void swap(int *n1, int *n2)		//주소변수!
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
