#include <stdio.h>

int main()
{
	int x=1, y=2, z=3;

	printf("%d\n", 10*2/5*2);
	printf("my ans: 8\n");

	printf("%d\n", 10-2*5+2/2);
	printf("my ans: 1\n");

	printf("%d\n", ++x * z--);
	printf("my ans: 6\n");
	
	printf("x: %d, z: %d\n", x, z);

	printf("%d\n", x+z >= z+ !y);
	printf("my ans: 1\n");

	printf("%d\n", x || y && z);
	printf("my ans: ?\n");

	printf("x: %d y: %d z: %d\n", x, y, z);



	return 0;
}
