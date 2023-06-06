#include <stdio.h>

#define N 5

int main()
{

	int i, repeat, temp, arr[N], count=0;
	char swap;	//플래그 변수

	printf("원소 다섯개(정수)를 입력하세요: \n");
	for(i=0; i<N; i++)
	{
		printf("arr[%d]: ", i);
		scanf("%d", arr+i);
	}
	
	//버블정렬 시작
	for(repeat=1; repeat<100; repeat++)
	{
		swap = 'N';
		for(i=0; i<N-repeat; i++)
		{
			if(arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;

				swap = 'Y';
			}
		}
		
		if(swap == 'N')	//정렬이 다 끝났다
				break;

		count++;
	}

	printf("\n===정렬 후===\n");
	for(i=0; i<N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n반복횟수: %d\n", count);
	printf("\n");


}
