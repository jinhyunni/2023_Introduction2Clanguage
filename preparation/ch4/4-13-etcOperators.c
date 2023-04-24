#include <stdio.h>

int main()
{
	char x='a';
	int y;
	double z=1.234;

	printf("Enter y value: ");
	scanf("%d", &y);

	printf("Value stored in y: %d", y);
	printf("Address of y: %p\n\n",  &y);	//%p: 주소의 값을 16진수로 출력한다.
	printf("\n");

	y = (y=3, y+5);
	printf("Comma operator: start evaluation from left\n");
	printf("ex) y = (y=3, y+5)\n");
	printf("value of y: %d\n\n", y);

	printf("sizeof() operator\n");
	printf("sizeof() operator returns bytes of variable\n");
	printf("ex)");
	printf("size of char variable: %d\n", sizeof(x));
	printf("size of int varible: %d\n", sizeof(y));
	printf("size of double variable: %d\n", sizeof(z));
	printf("size of float variable: %d\n\n", sizeof(float));
	
	printf("*promotion\n");
	printf("char: %d\n", sizeof(char));

	printf("short: %d\n", sizeof(short));
	printf("int: %d\n", sizeof(int));
	printf("long: %d\n", sizeof(long));

	printf("float: %d\n", sizeof(float));

	printf("double: %d\n", sizeof(double));

	return 0;
}
