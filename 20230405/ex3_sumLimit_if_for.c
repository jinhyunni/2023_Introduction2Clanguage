#include <stdio.h>

int main()
{
	int i, sum = 0;

	for(i = 1; ;i++){
		
		sum += i;

		if(sum > 1000)
			break;
	}
	
	printf("합이 1000이 넘었을 때의 항: %d\n", i);
	printf("1~%d까지의 합: %d\n", i, sum);
	

	return 0;
}
