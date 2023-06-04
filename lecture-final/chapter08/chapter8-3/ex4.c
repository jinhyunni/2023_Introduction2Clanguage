#include <stdio.h>

void increase(int []);

int main()
{
	int i, number[]={10, 20, 30, 40, 50};

	printf("배열 요소 증가 전\n");
	for(i=0; i<5; i++)
	{
		printf("number[%d]=%d\n", i, number[i]);

	}
	 
	increase(number);	//배열명을 넘겨주었다 

	printf("\n배열 요소 증가 후\n");
	for(i=0; i<5; i++)
	{
		printf("number[%d]=%d\n", i, number[i]);
	}

}

void increase(int score[])
{
	int i;

	for(i=0; i<5; i++)
		score[i]++;

}
