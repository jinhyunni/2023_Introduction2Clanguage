#include <stdio.h>

int main()
{
	int x, y;

	x=y=5;

	printf("Input: x=y=5\n");
	printf("==================\n");

	printf("x=%d, y=%d\n", x, y);
	printf("x += y is %d\n\n", x+=y);

	printf("x=%d, y=%d\n", x, y);
	printf("x-=y is %d\n\n", x-=y);

	printf("x=%d, y=%d\n", x, y);
	printf("x*=y is %d\n\n", x*=y);
	
	printf("x=%d, y=%d", x, y);
	printf("x /= y is %d\n\n", x/=y);

	printf("x=%d, y=%d\n", x, y);
	printf("x %%=y is %d\n", x %= y);


	return 0;
}
