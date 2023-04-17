#include <stdio.h>

int main()
{
	double avg = 83.768;

	printf("avg=%7.31f\n", avg);
	printf("avg=%6.21f\n", avg);

	printf("avg=%.2f\n", avg);
	printf("avg=%10f\n", avg);
	printf("avg=%5.1f\n", avg);

	return 0;
}
