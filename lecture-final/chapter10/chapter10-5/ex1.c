#include <stdio.h>

int main()
{
		char *fruit[7]={"Apple", "Orange", "Banana"};	//char형 포인터의 배열
	int i, j;

	for(i=0; i<3; i++)
	{
		printf("fruit[%d]=%s\n", i, fruit[i]);
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<7; j++)
		{
			printf("fruit[%d][%d]= %c\n", i, j, fruit[i][j]);//*(*(fruit+i)+j)
		}
		printf("\n");
	}

	printf("\n");
	

	
	return 0;
}
