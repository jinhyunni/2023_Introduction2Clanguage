#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void rank(int *);

int main()
{
	int score[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	rank(score);
	
	return 0;	
} 

void rank(int *p)
{
	
	int i;
	int myscore; 
	int rank=1;
	for(i=0; i<10; i++)
	{
		printf("score[%d]=%d\n", i, *(p+i));
	}
	
	printf("Enter score:  ");
	scanf("%d", &myscore);
	
	for(i=0; i<10; i++)
	{
		if(myscore < *(p+i))
			rank++;
	}
	
	printf("rank of the score: %d\n", rank);
}
