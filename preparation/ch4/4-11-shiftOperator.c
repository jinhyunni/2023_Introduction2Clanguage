#include <stdio.h>

int main()
{
	int a = 1;

	printf("a = 1 \n");
	printf("a << 1: %d\n", a << 1);
	printf("a << 2: %d\n", a << 2);
	printf("a << 3: %d\n\n", a << 3);

	int b = 8;

	printf("b = 8\n");
	printf("b >> 1: %d\n", b >> 1);
	printf("b >> 2: %d\n", b >> 2);
	printf("b >> 3: %d\n", b >> 3);
	
	return 0;
}
