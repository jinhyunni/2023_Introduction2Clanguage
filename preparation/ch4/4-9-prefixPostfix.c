#include <stdio.h>

int main()
{
	int x = 5;
	int y  = x++;
	printf("postfix: \n");
	printf("x = 5; y = x++\n");
	printf("x: %d\n", x);
	printf("y: %d\n\n", y);

	x = 5;
	y = ++x;
	printf("prefix: \n");
	printf("x = 5; y = ++x\n");
	printf("x: %d\n", x);
	printf("y: %d\n\n", y);

	int z;

	x=1, y=1, z=1;
	printf("x: %d, y: %d, z: %d\n\n", x, y, z);
	printf("Evaluation:\n");
	printf("x = (x++)*5;\n");
	printf("y = (++y)*5;\n");
	printf("z = 5 - (--z);\n\n");

	x = (x++) * 5;
	y = (++y) * 5;
	z = 5 - (--z);

	printf("x: %d, y: %d, z: %d\n", x, y, z);

	return 0;
}
