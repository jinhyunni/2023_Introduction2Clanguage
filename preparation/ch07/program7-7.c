#include <stdio.h>

int main()
{
	int m1[2][3], m2[2][3];
	int i, j;	//행, 렬 인자

	printf("행렬 1의 원소들을 입력하세요: \n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("m1[%d][%d]=", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}	

	printf("\n\n행렬 2의 원소들을 입력하세요: \n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("m2[%d][%d]=", i+1, j+1);
			scanf("%d", &m2[i][j]);
		}
	}

	//행렬 1의 출력

	printf("\n행렬 1의 출력:\n");
	for(i=0; i<2; i++)
	{
		printf("[");
		for(j=0; j<3; j++)
		{
			printf("%d ", m1[i][j]);
		}
		printf("]\n");
	}
	
	printf("\n행렬 2의 출력\n");
	//행렬 2의 출력
	for(i=0; i<2; i++)
	{
		printf("[");
		for(j=0; j<3; j++)
		{
			printf("%d ", m2[i][j]);
		}
		printf("]\n");
	}

	printf("\n====행렬 A와 B의 합====\n");

	for(i=0; i<2; i++)
	{
		printf("[");
		for(j=0; j<3; j++)
		{
			printf("%d ", m1[i][j]+m2[i][j]);
		}
		printf("]\n");
	}

	
	return 0;
}
