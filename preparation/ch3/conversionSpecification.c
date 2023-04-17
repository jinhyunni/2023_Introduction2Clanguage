#include <stdio.h>

int main()
{
	//use of conversion specification
	
	int n1 = 5;

	printf("To print-out integer type variable, %%d or %%i is used\n");
	printf("ex)\n");
	printf("Value stored in n1 is %d\n", n1);
	printf("Value stored in n1 is %i\n", n1);
	printf("\n");

	float n2 = 5.5;
	printf("To print-out float type variable, %%f is used\n");
	printf("ex)\n");
	printf("Value stored in n2 is %f\n", n2);
	printf("\n");

	double n3 = 5.57;
	printf("To print-out double type variable, %%lf is used\n");
	printf("ex)\n");
	printf("Value stored in n3 is %lf\n", n3);
	printf("\n");

	char a = 'c';

	printf("To print-out one character, %%c is used\n");
	printf("ex)\n");
	printf("A chracter stored in a is %c\n", a);
	printf("**********\n");
	printf("*To store character in char-type variable, '' is used*\n");
	printf("\n");
	
	char s1[10] = "Jinhyun";
	printf("To print-out string(sentence), %%s is used\n");
	printf("ex)\n");
	printf("A string stored in s1 is %s\n", s1);
	printf("\n");
	

	return 0;
}
