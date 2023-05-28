#include <stdio.h>

int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int i;

 //	//print out address of array
 //	printf("%x\n", a); //배열의 시작 주소
 //	printf("%d\n", a[0]); //배열의 0번지의 데이터
 //	printf("%x\n", &a[0]); //이 역시 배열의 시작주소

	//배열의 주소를 출력
	for(i=0; i<5; i++)
	{
		printf("address of a[%d] is %x\n", i, a+i);
	}
	
	printf("int 자료형의 크기: %d\n", sizeof(int));
	printf("배열 a의 크기: %d\n", sizeof(a));
	printf("\n");
	
	for(i=0; i<5; i++)
	{
		printf("%d data in array is %d\n", i+1, a[i]);
	}


	return 0;
}
