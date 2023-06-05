#include <stdio.h>

int main()
{
	//1~n까지의 합 중 처음으로 100이 넘는 n을 구하기
	//무한루프와 break를 사용할것

	int i=0, sum=0;

	while(1)
	{
		i++;
		sum += i;

		if(sum > 100)
			break;

	}
	
	printf("sum: %d, integer: %d\n", sum, i);


	return 0;
}
