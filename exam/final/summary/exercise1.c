#include <stdio.h>
#include <limits.h>

#define MAX INT_MAX
#define Min INT_MIN

//5개의 원소의 입력을 받고 최댓값, 최솟값, 평균값을 구하기

#define N 5


int main()
{

	int arr[N];
	int i, sum=0, max, min;
	double avg;

	printf("5개의 원소를 입력하세요: \n");
	
	for(i=0; i<N; i++)
	{
		printf("arr[%d] = ", i);
		scanf("%d", arr+i);		//arr+i -> 배열의 주소!
	}
	
	max = arr[0];
	min = arr[0];

	for(i=0; i<5; i++)
	{
		sum += arr[i];

		if(arr[i]>max)
				max = arr[i];
		if(arr[i]<min)
				min = arr[i];

	}
	
	avg = (double)sum/N;

	printf("=====result=====\n\n");

	printf("Input array: \n");

	for(i=0; i<N; i++)
			printf("%d ", arr[i]);

	printf("\nMax: %d\n", max);
	printf("Min: %d\n", min);
	printf("avg: %.1lf", avg);



}
