#include <stdio.h>
#define SIZE 5

int main()
{
	int kor[SIZE] = {88, 89, 99, 100, 99};
	int math[SIZE] = {56, 78, 99, 34, 78};
	int eng[SIZE] = {68, 100, 89, 99, 22};

	int order[SIZE];	//점수의 총합을 저장할 배열
	int sum, i, j, temp;
	double avg;

	for(i=0; i<SIZE; i++)
	{
		order[i] = kor[i] + math[i] + eng[i];
	}
	
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE-1; j++)
		{
			if(order[j] >= order[j+1])
			{
				temp=order[j+1];
				order[j+1]=order[j];
				order[j]=temp;
			}
		}
	}
	
	for(i=0; i<SIZE; i++)
	{
		printf("order[%d] = %d\n", i, order[i]);
	}
	


}
