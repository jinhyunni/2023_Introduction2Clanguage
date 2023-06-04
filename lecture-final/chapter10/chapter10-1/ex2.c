#include <stdio.h>

int main()
{
	int a=10, b=20, temp;

	int *p1, *p2;

	p1 = &a;
	p2 = &b;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	printf("=============\n");

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
