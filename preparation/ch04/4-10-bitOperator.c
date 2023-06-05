#include <stdio.h>

int main()
{	
	int a, b;

	printf("Bit operator: &(And), |(Or), XOR(^), Not(~)\n\n");
	printf("Input number1: ");
	scanf("%d", &a);
	printf("Input number2: ");
	scanf("%d", &b);

	printf("\n");
	printf("%d & %d = %d\n", a, b, a & b);	
	printf("%d | %d = %d\n", a, b, a | b);	
	printf("%d ^ %d = %d\n", a, b, a^b);	
	printf("~%d = %d\n", a, ~a);	


	return 0;
}	
