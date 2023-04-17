#include <stdio.h>

int main()
{
	//홀수들의 합이 100000이 넘게되는 홀수 찾기!
	
	int i, sum=0;
	

	for(i = 1; ; i = i+2){
	
		sum += i;

		if(sum >= 100000)
			break;
	
	}
	
	printf("Sum is %d, and i is %d", sum, i);

	return 0;
}
