#include <stdio.h>

int main()
{
	int a[]={10, 20, 30, 40, 50}, i;
	int *p=a;

	//배열명을 이용해서 원소 출력하기
	printf("<배열명을 이용해서 원소 출력하기>\n");
	for(i=0; i<5; i++)
			printf("a[%d]=%d\n", i ,a[i]);

	printf("\n");
	//포인터를 이용해서 원소 출력하기
	printf("<포인터를 이용해서 원소 출력하기>\n");
	for(i=0; i<5; i++)
			printf("a[%d]=%d\n", i, *(p+i));	//*p++
	
	printf("\n");

	//배열명을 이용해서 원소의 주소 출력하기
	printf("<배열명을 이용해서 원소의 주소 출력하기>\n");
	for(i=0; i<5; i++)
			printf("&a[%d]=%X\n", i, a+i);		//&a[i]

	printf("\n");

	//포인터를 이용해서 원소의 주소 출력하기
	printf("<포인터를 이용해서 원소의 주소 출력하기>\n");
	for(i=0; i<5; i++)
			printf("&a[%d]=%X\n", i, p+i);		//p++



	return 0;
}
