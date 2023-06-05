#include <stdio.h>
#define N 4

int main()
{	
	//노트북과 펜의 분기별 판매수
	int notebook[N]={2507, 2232, 2009, 2890};
	int pen[N]={4527, 5370, 4923, 6097};
	int i, sum=0;	//누적변수는 초기화!
	double average;

	//노트북의 평균 판매수 구하기
	for(i=0; i<N; i++)
	{	
		sum += notebook[i];
	}
	
	printf("노트북의 연평균 판매수: %.1lf\n", (double)sum/N);
		

	//펜의 평균 판매수 구하기
	sum=0;
	for(i=0; i<N; i++)
	{
		sum += pen[i]; 
	}

	printf("펜의 연평균 판매수: %.1lf\n", (double)sum/N);

}
