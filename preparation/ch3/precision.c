#include <stdio.h>

int main()
{	
	double n1 = 3.141592653;

	printf("When printing double-type variable, precisions can be specified\n");
	printf("\n");
	printf("How: %%(field-width).(precision)lf\n");
	printf("***: '.' also takes one field-width\n");
	printf("\n");
	printf("a)3-precision\n");
	printf("n1=%.3lf\n\n", n1);
	printf("b)5-precision\n");
	printf("n1=%.5lf\n\n", n1);
	printf("c)7-precision\n");
	printf("n1=%.7lf\n\n", n1);
	printf("**********");
	printf("\n\n");
	printf("field-width specified\n");
	printf("place for precisions and point should be included\n");
	printf("if number-of-digits is larger than field-width, field-width is expanded\n");
	printf("\n");
	printf("n1=%5.3lf\n", n1);
	printf("n1=%7.5lf\n", n1);
	printf("n1=%9.7lf\n", n1);


	return 0;
}
