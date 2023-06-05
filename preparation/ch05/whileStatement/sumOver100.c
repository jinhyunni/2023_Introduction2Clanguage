#include <stdio.h>

int main()
{
	//1~n까지의 합. 합이 1000이 넘는 시점에서 반복을 종료하기
	//while문 이용
	
	//증가 변수를 어떻게 정할건지에 따라서...반복구문 안에 더할 숫자 주의!
	int i=0, sum=0;

	while(sum<=100)
	{

		//합이 100이 넘고 i에 1을 더하여 출력되면 안됨! 따라서 sum 변수 앞에 i++ 선언해주어야 한다.
		i++;

		sum += i;

		//i++; -> 합이 100이 넘고 i가 1 추가되서 출력됨

	}
	
	printf("The sum from 1 to %d is %d\n", i, sum);

	return 0;
}
