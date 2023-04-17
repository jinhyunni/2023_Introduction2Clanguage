#include <stdio.h>

int main()
{
	int dice1, dice2;
	int i, j, count=0;

	printf("Dice1		Dice2\n");


	for(i=1; i<=6; i++)
	{	
		dice1 = i;	

		for(j=1; j<=6; j++)
		{
			dice2 = j;
			if(dice1+dice2 == 7)
			{
				count+=1;
				printf("%d\t\t%d\n", dice1, dice2);
			}
		}

	}

	printf("The number: %d\n", count);


	return 0;
}
