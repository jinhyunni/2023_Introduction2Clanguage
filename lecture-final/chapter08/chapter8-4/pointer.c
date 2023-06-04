#include <stdio.h>

void increase(int *, int *);

int main()
{
	int a=10, b=20;

	printf("Before increase: \n");
	printf("a=%d, b=%d\n\n", a, b);

	increase(&a, &b);

	printf("After increase: \n");
	printf("a=%d, b=%d\n", a, b);

}

void increase(int *n1, int *n2)
{
	*n1+=1;
	*n2+=1;
}
