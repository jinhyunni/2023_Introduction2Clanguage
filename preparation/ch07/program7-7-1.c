#include <stdio.h>

#define N 3
#define M 3

int main()
{
	int i, j, sum, m1[N][M], m2[M][N];

	printf("%dx%d, %dx%d 행렬의 곱셈을 계산합니다.\n\n", N, M, M, N);

	printf("===행렬 1을 입력하세요===\n");
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
				printf("m1[%d][%d]=", i+1, j+1);
				scanf("%d", &m1[i][j]);
		}
	}
	printf("\n");

	printf("===행렬 2를 입력하세요===\n");
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
				printf("m2[%d][%d]=", i+1, j+1);
				scanf("%d", &m2[i][j]);
		}
	}
	printf("\n");
	
	printf("행렬1: \n");
	for(i=0; i<N; i++)
	{
		printf("[");
		for(j=0; j<M; j++)
		{
			printf("%d ", m1[i][j]);
		}
		printf("]\n");

	}
	printf("\n");
	
	printf("행렬2: \n");
	for(i=0; i<M; i++)
	{
		printf("[");
		for(j=0; j<N; j++)
		{
			printf("%d ", m2[i][j]);
		}
		printf("]\n");

	}
	printf("\n");

	printf("====행렬 1과 행렬 2의 곱셈===\n");
	for(i=0; i<N; i++)
	{	
		printf("[");
		for(j=0; j<M; j++)
		{
			sum+=m1[i][j]+m2[j][i];
			printf("%d ", sum);
		}
		printf("]\n");
	}


}
