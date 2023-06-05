#include <stdio.h>

int main()
{
	char c = 'A';
	int x=10, y=4, sum;
	double pi=3.14, div;

	printf("Type conversion\n");
	printf("1. Type conversion between char type and int type\n");
	sum = c + 2;
	printf("sum = %d = %c\n\n", sum, sum);

	printf("2. Type conversion between double type and int type\n");
	sum = pi;
 	printf("sum = %d\n\n", sum);

	printf("3. Type conversion: cast operator\n");
	printf("3.1: Division between int variable: x/y = %d\n", x/y);
	printf("3.2: Division between int variable, by using cast operator: (double)x/(double)y = %lf\n", (double)x/(double)y);
	printf("3.3: Division between int and double variable: x/4.(doubl = %lf\n", x/4.);

	return 0;
}
