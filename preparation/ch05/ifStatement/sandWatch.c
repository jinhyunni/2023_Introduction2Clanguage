#include <stdio.h>

int main()
{
	int row, i, j;

	printf("Enter an integer: ");
	scanf("%d", &row);
	

	//upper section
	for(i=1; i<=row-1; i++)
	{
		for(j=1; j<=i-1; j++)
			printf(" ");
		for(j=1; j<=(2*row+1)-2*i; j++)
			printf("*");
		for(j=1; j<=i-1; j++)
			printf(" ");
		//line change
		printf("\n");
	}
	
	//middle section
	for(i=1; i<=row-1; i++)
			printf(" ");
	
	printf("*");

	for(i=1; i<=row-1; i++)
			printf(" ");
	//line change
	printf("\n");
	
	//lower section
	for(i=row-1; i>=1; i--)
	{
		for(j=1; j<=i-1; j++)
			printf(" ");
		for(j=1; j<=(2*row+1)-2*i; j++)
			printf("*");
		for(j=1; j<=i-1; j++)
			printf(" ");
		//line change
		printf("\n");
	}

	return 0;
}
