#include <stdio.h>
#include <limits.h>

#define SIZE 10
#define MAX INT_MAX
#define MIN INT_MIN

int main()
{	
	int i;	//배열의 위치(첨자변수)
	int count=0; //배열의 내용 중에서 짝수의 개수와 위치를 선언
	int max=MIN;	//최댓값을 저장할 변수
	int min=MAX; 	//최솟값을 저장할 변

	int num[SIZE];	//배열선언
	int even[SIZE]; //짝수를 저장할 배열
	

	//배열에 원소 입력
	for(i=0; i<SIZE; i++)
	{
		printf("%d 번째 원소를 입력하시오: ", i+1);
		scanf("%d", num+i);
	}
	

	//짝수인 원소를 짝수 배열에 따로 저장하기
	for(i=0; i<SIZE; i++)
	{
		if(num[i]%2 == 0)
		{
			even[count++] = num[i];	//index와 값을 모두 입력해주어야 한다!
			//even[count++]의 사용에 주목!

			//원래 코드:
			//even[count]=num[i];
			//count++;
		}
			
	}

	//배열에서 최댓값 찾기
	for(i=0; i<SIZE; i++)
	{
		if(num[i]>max)
			max = num[i];
	}
	
	//배열에서 최솟값 찾기
	for(i=0; i<SIZE; i++)
	{
		if(num[i]<min)
			min = num[i];
	}
	
	//결과값을 출력
 	printf("입력 배열의 내용 출력하기\n");

 	for(i=0; i<SIZE; i++)
 	{
 		printf("%d 번쩨 원소: %d\n", i+1, num[i]);
	}
	printf("\n");


	printf("출력 배열의 내용 출력하기\n");

	for(i=0; i<count; i++)
	{
		printf("%d 번째 원소: %d\n", i+1, even[i]);
	}

	printf("짝수의 개수: %d\n", count);
	printf("\n");

	printf("응용: 입력 배열에서 원소의 최댓값, 최솟값 출력해보기!\n");
	printf("\n");
	printf("배열에서의 최댓값: %d\n", max);
	printf("배열에서의 최솟값: %d\n", min);

	return 0;
}
