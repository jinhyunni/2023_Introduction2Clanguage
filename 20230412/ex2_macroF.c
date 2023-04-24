#include <stdio.h>

#define PI 3.141592
#define CIRCUM(r) (2*PI*(r))
#define AREA(r) (PI*(r)*(r))

int main()
{
	int radius;

	printf("Enter circle's radius: ");
	scanf("%d", &radius);
	
	printf("원의 둘레: %-5.3f(cm)\n", CIRCUM(radius));
	printf("원의 면적: %-4.2f(cm)", AREA(radius));
	
}
