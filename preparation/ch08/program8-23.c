#include <stdio.h>

#define N 5		//배열의 원소의 개수

void prt_arr(int [], int);
int find_min(int [], int);

int main()
{
	int arr[N] = {4, 5, 2, 1, -10};
	int i;
	
	//배열의 원소 출력하기
	//배열 전체를 함수에 넘기기: (only)pass by reference
	prt_arr(arr, N);

	//최솟값 출력하기
	printf("\nmin value: %d", find_min(arr,N));
}

//배열을 출력하는 함수
void prt_arr(int arr[], int n)
{
	int i;

	for(i=0; i<n; i++)
	{
		printf("%4d ", arr[i]);
	}
}

//배열에서 최솟값을 찾아 반환하는 함수
int find_min(int arr[], int n)
{
	int i;
	int min = arr[0];

	for(i=0; i<n; i++)
	{
		if(arr[i] < min)	//i번째 원소랑 비교해야됨...자꾸 습관적으로 [0]으로 놓는다...
			min = arr[i];
	}
	
	return(min);
}
