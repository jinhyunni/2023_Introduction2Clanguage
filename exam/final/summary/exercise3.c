//여러 반의 점수를 이중배열로 입력받음
//함수를 이용하여 이중 배열로 저장된 각 반의 평균, 최고점, 최저점을 구하라.

#include <stdio.h>

#define N 5

void Print_avg_eachClass(int (*)[], int);
void Print_max_eachClass(int (*)[], int);
void Print_min_eachClass(int (*)[], int);

int main()
{

	int score[][N]={

		{10, 20, 30, 40, 50},
		{90, 100, 44, 59, 29},
		{60, 78, 98, 100, 77}

	};

	int num = N;
	

	Print_avg_eachClass(score, num);
	printf("\n");
	Print_max_eachClass(score, num);
	printf("\n");
	Print_min_eachClass(score, num);

}

void Print_avg_eachClass(int (*score)[N], int sN)
{
	int i, j;
	int sum=0;
	double avg=0;

	for(i=0; i<3; i++)
	{

		for(j=0; j<sN; j++)
		{
			sum += *(*(score+i)+j);
		}

		avg=(double)sum/sN;
		printf("average score of class %d is %.1lf\n", i+1, avg);
		
		sum=0;
	}

}

void Print_max_eachClass(int (*score)[N], int sN)
{
	int i, j;
	int max;

	for(i=0; i<3; i++)
	{
		
		max = score[i][0];

		for(j=0; j<sN; j++)
		{
			if(max < *(*(score+i)+j))
					max = *(*(score+i)+j);
		}

		printf("maximum score of class %d is %d\n", i+1, max);
		
	}

}

void Print_min_eachClass(int (*score)[N], int sN)
{
	int i, j;
	int min;

	for(i=0; i<3; i++)
	{
		
		min = score[i][0];

		for(j=0; j<sN; j++)
		{
			if(min > score[i][j])
					min = score[i][j];
		}

		printf("minimun score of class %d is %d\n", i+1, min);
		
	}

}

