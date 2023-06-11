#include <stdio.h>

int summation(int);

int main()
{
	int n;

	printf("Summation from n to 1\n");
	printf("Input N:");
	scanf("%d", &n);

	printf("Sum from %d to 1 is : %d", n, summation(n));

	return 0;

}

int summation(int n)
{
	int sum;

	printf("%d\n", sum);

	if(n>1)
			sum = summation(n-1)+ n;
	else
			sum=1;

	return sum;

}
