#include <stdio.h>

int main()
{
	int array[][3]={{10, 20, 30}, {40, 50, 60}};
	// int **p = array;
	int (*p)[3]=array;		//포인터가 가리키는 주소에 있는 것: 정수형 변수를 담고있는 크기 3의 배열
	
	int i, j;
	
	//포인터로 각 주소에 존재하는 데이터 참조하기
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			printf("*(*(p+%d)+%d)=%c\n", i, j, *(*(p+i)+j));
			
		printf("\n");
	}	
} 
