#include <stdio.h>

int main()
{
	int a[]={10, 20, 30, 40, 50};
	int i=1;
	
	printf("a[i++] = %d\n", a[i++]);	// 20
	printf("a[++i] = %d\n", a[++i]);	//40

	i++;

	printf("a[i]++ = %d\n", a[i]++);	//50
	printf("++a[i] = %d\n", ++a[i]);	//52
	
	printf("\n elements of array: \n");
	for(i=0; i<5; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

	return 0;
}
