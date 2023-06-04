#include <stdio.h>

int main()
{
	int a[]={10, 20, 30, 40, 50};

	int *p=a, i;
	
	//배열의 관점에서 배열의 값 출력하기
	for(i=0; i<5; i++)
		printf("a[%d]=%d\n", i, a[i]);
	
	printf("\n");

	//포인터의 관점에서 배열의 값 출력하기
	for(i=0; i<5; i++)
		printf("*(p+%d)=%d\n", i, *(p+i));
	
	printf("===============\n");
	//배열을 포인터를 사용해서 출력하기

	for(i=0; i<5; i++)
		printf("*(a+%d)=%d", i, *(a+i));

	printf("\n");
	
	//포인터 선언을 배열 표현으로
	for(i=0; i<5; i++)
		printf("p[%d]=%d\n", i, p[i]);
}
