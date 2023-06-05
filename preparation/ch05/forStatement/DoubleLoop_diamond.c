#include <stdio.h>

int main()
{
	int row, i, j;

	printf("Enter an integer: ");
	scanf("%d", &row);

	//upper part
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=(row+1-i); j++)
		{
			printf(" ");
		}

		for(j=1; j<=2*i-1; j++)
		{
			printf("*");
		}

		for(j=1; j<=(row+1-i); j++)
		{
			printf(" ");
		}

		printf("\n");
	}
	
	//middle part
	for(i=1; i<=2*row+1; i++)
	{
		printf("*");
	}

	printf("\n");

	//lower part
	for(i=row; i>=1; i--)
	{
		for(j=1; j<=(row+1-i); j++)
		{
			printf(" ");
		}

		for(j=1; j<=2*i-1; j++)
		{
			printf("*");
		}

		for(j=1; j<=(row+1-i); j++)
		{
			printf(" ");
		}
		printf("\n");
	}
		
	return 0;
}
