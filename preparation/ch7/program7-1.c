#include <stdio.h>
#define N 5

int main()
{
	int score[N];
	int i, sum=0, count=0;	//누적변수의 초기화 주의!
	double avg;

	printf("%d명의 점수를 입력하시오\n", N);
	for(i=0; i<N; i++)
	{	
		printf("%d번 학생: ", i+1);
		scanf("%d", score+i);	//1차원 배열에서 배열명은 첫번째 원소의 주소를 의미한다!
	}
	
	//평균값 계산
	for(i=0; i<N; i++)
	{
		sum += score[i];
	}

	avg = (double)sum/N;

	printf("========\n");
	printf("평균점수: %.1lf\n", avg);

	//평균 미만자 수 구하기
	for(i=0; i<N; i++)
	{
		if(score[i] < avg)
			count++;
	}
	printf("========\n");
	printf("평균 미만자수: %d\n", count);
	
	

	return 0;
}
