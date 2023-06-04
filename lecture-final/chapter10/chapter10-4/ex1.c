#include <stdio.h>

void increase(int *);

int main()
{
	int a[]={10, 20, 30, 40, 50};
	int i;
	
	printf("===Before Array===\n");
	
	for(i=0; i<5; i++)
		printf("a[%d]=%d\n", i, a[i]);

	increase(a);	//배열의 시작 원소의 주소를 넘겨준것

	printf("===After Array===\n");

	for(i=0; i<5; i++)
		printf("a[%d]=%d\n", i, a[i]);


	return 0;
}

void increase(int *p)	//포인터로 배열 받기!
{
	int i;

	for(i=0; i<5; i++)
	{
		*p++ += 1;		//*p++ -> *(p++)

	}

	/*
	for(i=0; i<5; i++)
	{
		*p = *p+1;
		p++;
	}
	   */
}
