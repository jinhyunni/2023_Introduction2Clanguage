#include <stdio.h>
#include <stdlib.h>	//rand()함수를 이용하기 위한 라이브러리
#include <time.h>	//srand()함수를 이용해 씨드값 결정. 현재의 시간을 씨드값으로 사용하자

int main()
{
	int i, random;

	srand(time(NULL));	//random 함수를 위한 씨드값 설정

	for(i=0; i<5; i++)
	{
		random = rand();	//난수 얻기!
		printf("%d random number: %d\n", i+1, random);
	}
}
