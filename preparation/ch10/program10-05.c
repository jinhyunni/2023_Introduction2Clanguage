#include <stdio.h>

#define N 5

int main()
{
	int score[N];
	int *p=score;

	int i, sum=0, count=0;		//누적변수는 항상 초기화!
	double avg;


	printf("포인터가 가리키는 주소: %p\n", p);
	printf("배열의 첫 원소의 주소: %p\n\n", score);

	printf("5명의 점수를 입력하세요\n\n");
	for(i=0; i<N; i++)
	{	
		printf("학생 %d번의 점수: ", i+1);
		scanf("%d", p++);		//score+i;
	}
	
	printf("p가 가리키는 주소: %p\n", p);
	p=score;
	printf("p가 가리키는 주소: %p\n", p);
	
	//평균 구하기
	for(i=0; i<N; i++)
	{
		sum += *(p++);		//sum += *(score+i);
	}

	avg = (double)sum/N;
	p=score;

	//평균 미만의 학생 수 구하기
	for(i=0; i<N; i++)
	{
		if(avg > *p++)
			count++;
	}

	//결과 출력
	printf("\n===============\n");
	printf("평균: %.1lf\n", avg);
	printf("평균 미만의 학생수: %d\n", count);


}
