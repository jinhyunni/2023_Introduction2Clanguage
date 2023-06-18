#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define HOT 20

void find_max(int *);
void find_overday(int *);


int main()
{

	int i, temp[N];
	
	srand(time(NULL));	//random 함수의 씨드값을 시간으로 설정!

	for(i=0; i<N; i++)
	{
		temp[i]=rand()%40+1;	//+1: 40도 역시 포함시키기 위해서
	}
	
	printf("For Test\n");
	for(i=0; i<N; i++)
	{
		printf("%d ", temp[i]);
	}
	
	printf("\n\n");

	find_max(temp);
	find_overday(temp);
	
	return 0;
}

void find_max(int *p)
{
	int i;
	int max = *p;

	for(i=0; i<N; i++)
	{
		if(*p > max)
				max = *p;

		p++;
	}

	printf("Maximum temp is : %d\n", max);
}

void find_overday(int *p)
{
	int i;
	int count=0;

	for(i=0; i<N; i++)
	{
		if(*p > HOT)
				count++;

		p++;
	}

	printf("The number of hot night is: %d\n", count);
}
