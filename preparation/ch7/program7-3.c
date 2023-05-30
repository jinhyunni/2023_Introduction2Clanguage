#include <stdio.h>

int main()
{
	//1~5번의 연예인의 선호도를 30명이 투표한 결과
	int survey[30]={1, 2, 3, 2, 4, 4, 1, 5, 2, 3, 5, 2, 3, 4, 1, 5, 2, 3, 4, 5, 1, 1, 3, 5, 5, 3, 2, 1, 3, 5};
	int vote[6]={0};
	int i;

	for(i=0; i<30; i++)
	{
		if(survey[i] == 1)
			vote[1] += 1;

		else if(survey[i] == 2)
			vote[2] += 1;

		else if(survey[i] == 3)
			vote[3] += 1;

		else if(survey[i] == 4)
			vote[4] += 1;

		else
			vote[5] += 1;
	
	}

	for(i=0; i<5; i++)
	{
		printf("Vote on celebrity %d is: %d\n", i+1, vote[i+1]);
	}


	return 0;
}
