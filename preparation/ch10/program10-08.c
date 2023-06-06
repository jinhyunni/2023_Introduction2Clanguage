#include <stdio.h>

#define N 4

void prt_arr(int *);
void percentage(int *);

int main()
{
	int count[N]={42, 37, 83, 33};

	printf("각 연예인을 뽑은 인원수\n");
	prt_arr(count);
	printf("\n");

	percentage(count);

	printf("득표 백분율: ");
	prt_arr(count);

	return 0;

}

void prt_arr(int *p)
{
	int i=N;
	
	for(i=0; i<N; i++)
	{
		printf("%d ", *(p+i));
	}

}

void percentage(int *p)
{	
	int i;
	int sum=0;	//누적변수는 초기화해준다

	for(i=0; i<N; i++)
	{
		sum += *(p+i);		//*p++를 해준다면...? 반복문이 끝나고 난 후 포인터가 가르키는 변수를 어떻게 바꿀것인가
	}

	//백분율로 환산하기
	for(i=0; i<N; i++)
	{
		*(p+i)=(int)(((double)*(p+i)/sum)*100);
	}

}
