#include <stdio.h>

int main()
{
	int i, sum = 0;
	
	i = 1;	//반복의 초깃값

	while(i <= 100){
		sum += i;
		i++;	//증감식
	}
	
	printf("sum of integers from 1 to 100: %d\n", sum);
}
