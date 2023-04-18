#include <stdio.h>

int main()
{
	int x, y;

	int max, min, quotient, remainder;
	
	//input number
	printf("Enter first integer: ");
	scanf("%d", &x);

	printf("Enter second integer: ");
	scanf("%d", &y);
	
	//Evaluation
	(x > y) ? (max = x, min = y): (max = y, min = x);
	
	quotient = max/min;
	remainder = max%min;
	
	//Output
	printf("Max: %d, Min: %d\n", max, min);
	printf("Quotient: %d\n", quotient);
	printf("remainder: %d\n", remainder);


	return 0;
}
