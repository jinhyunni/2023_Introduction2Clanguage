#include <stdio.h>

// 배열 입력: 함수로
// 배열의 최솟값 최댓값: 함수로 찾기
// 배열의 평균값 구하기: 함수로 구하기


#define N 5


void Input_arr(int *, int);
int Find_max(int *, int);
int Find_min(int *, int);
double Cal_avg(int *, int);

int main()
{
	int arr[N], size=N;
	
	Input_arr(arr, size);

	int maximum = Find_max(arr, size);
	int minimum = Find_min(arr, size);
	double avg = Cal_avg(arr, size);
	
	printf("max: %d\n", maximum);
	printf("min: %d\n", minimum);
	printf("avg: %.1lf\n", avg);

	return 0;
}

void Input_arr(int *p, int n)
{
	int i;
	
	printf("Start input function: \n");

	for(i=0; i<n; i++)
	{	
		printf("arr[%d] = ", i);
		scanf("%d", p+i);
	}	

}

int Find_max(int *p, int n)
{
	int i;	
	int max = *p;

	for(i=0; i<n; i++)
	{
		if(*p > max)
		{
				max = *p;
		}
		
		p++;
	}
	
	return max;
}

int Find_min(int *p, int n)
{
	int i;	
	int min = *p;

	for(i=0; i<n; i++)
	{
		if(*p < min)
		{
				min = *p;
		}
		
		p++;
	}

	return min;
}

double Cal_avg(int *p, int n)
{
	int i, sum=0;
	double avg;

	for(i=0; i<n; i++)
	{
		sum += *p++;
	}

	return (double)sum/n;

}
