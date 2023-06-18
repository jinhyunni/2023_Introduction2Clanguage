#include <stdio.h>
#define N 5
// 5개의 숫자를 입력받아 홀수, 짝수를 구분하고 홀수의 합, 갯수, 짝수의 합, 갯수를 구하는 코드를 작성하라.

int Count_even(int *);
int Sum_even(int *);
int Count_odd(int *);
int Sum_odd(int *);


int main()
{
	int i;	
	
	int evenCount, evenSum, oddCount, oddSum;

	int input[N];

	printf("숫자를 입력하세요: \n");

	for(i=0; i<N; i++)
	{
		scanf("%d", input+i);
	}	
	
	
	evenCount = Count_even(input);
	evenSum = Sum_even(input);
	oddCount = Count_odd(input);
	oddSum = Sum_odd(input);

	printf("짝수의 개수: %d\n", evenCount);
	printf("짝수의 합: %d\n", evenSum);
	printf("홀수의 개수: %d\n", oddCount);
	printf("짝수의 합: %d\n", oddSum);

	return 0;
}

int Count_even(int *p)
{
	int i;
	int count=0;

	for(i=0; i<5; i++)
	{
		if(*p%2 == 0)
				count++;
		p++;
	}
	
	return count;
}

int Count_odd(int *p)
{
	int i;
	int count=0;

	for(i=0; i<5; i++)
	{
		if(*p%2)
				count++;
		p++;
	}
	
	return count;
}

int Sum_even(int *p)
{
	int i;
	int sum=0;

	for(i=0; i<5; i++)
	{
		if(*p%2 == 0)
				sum+=*p;
		p++;
	}
	
	return sum;
}

int Sum_odd(int *p)
{
	int i;
	int sum=0;

	for(i=0; i<5; i++)
	{
		if(*p%2)
				sum+=*p;
		p++;
	}
	
	return sum;
}
