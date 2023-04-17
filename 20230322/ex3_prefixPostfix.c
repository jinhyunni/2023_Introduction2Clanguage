#include <stdio.h>

int main()
{
	int x=5;
	int y=x++;

	printf("x = %d\n", x);	//ans: 5
	printf("y = %d\n", y);	//ans: 6

	int z=5;
	int w=++z;

	printf("z = %d\n", z);	//ans: 6
	printf("w = %d\n", w);	//and: 6
}
