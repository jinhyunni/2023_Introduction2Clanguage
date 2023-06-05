#include <stdio.h>

int main()
{	
	
	int i;
	int step, mult=1, sum=0;

	printf("Enter an integer: ");
	scanf("%d", &step);

	for(i=1; i<=step; i++)
	{
		sum += i;
		mult *= i;
	}

	printf("The sum of 1 to %d is %d\n", step, sum);
	printf("The multiplication from 1 to %d is %d\n", step, mult);



	return 0;
}
