#include <stdio.h>

#define N 5

int main()
{

	int i, repeat, temp, a[N]={5, 4, 2, 3, 1};
	
	printf("===정렬 전===\n");
	for(i=0; i<N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for(repeat=1; repeat<N; repeat++)
	{
		for(i=0; i<N-repeat; i++)
		{	
			if(a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1]= temp;
			}
		}
	}

	printf("===정렬 후===\n");
	for(i=0; i<N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	
	return 0;
}
