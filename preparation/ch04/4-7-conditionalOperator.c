#include <stdio.h>

int main()
{
	int x;
	printf("Enter an integer: ");
	scanf("%d", &x);

	(x%2 == 0) ? printf("x is even"): printf("x is odd");


	return 0;
}
