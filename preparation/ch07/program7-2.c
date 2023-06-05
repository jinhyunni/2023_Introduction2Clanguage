#include <stdio.h>
#define N 5

int main()
{
	int froze[N]={3, 0, -30, -20, -1};
	int min=froze[0], i, j=0;

	printf("물질의 어는점: ");

	for(i=0; i<N; i++)
	{
		printf("%d\t", froze[i]);
	}
	printf("\n");

	//어는점 목록에서 어는점의 최솟값 구하기

	for(i=0; i<N; i++)
	{
		if(froze[i] <= min)
		{
			min = froze[i];
			j = i;
		}
	}
	
	printf("가장 낮은 어는점: %d\n", min);
	printf("%d\n", j);

	return 0;
}
