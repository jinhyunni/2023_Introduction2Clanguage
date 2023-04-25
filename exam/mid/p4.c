#include <stdio.h>

int main()
{

	float n;
	printf("Input: ");
	scanf("%f", &n);

	switch((int)n)
	{

		case 1: printf("%f\n", n);
		case 2: printf("%f\n", n+1);
		case 3: printf("%f\n", n+2);
		default: printf("exit\n");

	}

	
}
