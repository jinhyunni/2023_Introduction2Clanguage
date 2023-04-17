#include <stdio.h>

int main()
{	
	double n1 = 9.911;
	double n2 = 77.7712;
	double n3 = 100.111212;
	
	printf("Before specifying field-width\n");
	printf("n1=%lf\n", n1);
	printf("n2=%lf\n", n2);
	printf("n3=%lf\n", n3);
	printf("**********\n\n");

	printf("After specifying field-width\n");
	printf("a) right-assigned(default)\n");
	printf("FieldWidth: 10, n1=%10lf\n", n1);
	printf("FieldWidth: 10, n2=%10lf\n", n2);
	printf("FieldWidth: 10, n3=%10lf\n", n3);
	printf("\n");
	printf("b) left-assigned field-width\n");
	printf("FieldWidth: 11, n1=%-11lf\n", n1);
	printf("FieldWidth: 11, n2=%-11lf\n", n2);
	printf("FieldWidth: 11, n3=%-11lf\n", n3);
	printf("**********\n");

	printf("What happens if number if digits is larger than specified field-width?\n");
	printf("\n");
	
	double n4 = 99.781;

	printf("n4 is %lf\n", n4);
	printf("\n");
	printf("field-width: 10\n");
	printf("n4=%10lf\n", n4);
	printf("\n");
	printf("fieldwidth: 2\n");
	printf("n4=%2lf\n", n4);
	printf("->fieldwidth expanded!\n");

	return 0;
}
