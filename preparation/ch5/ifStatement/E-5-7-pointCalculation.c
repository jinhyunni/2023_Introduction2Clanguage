#include <stdio.h>
#include <stdlib.h>

int main()
{
	char gender, marry, Army;

	int  children=0, point = 0;
	
	fflush(stdin);
	printf("Enter your gender(male: m, female: f): ");
	scanf("%c", &gender);
	

	if(gender == 'f')
	{
		printf("Are you married(yes: y No:n) ");
		fflush(stdin);
		scanf("%c", &marry);
		if(marry == 'y')
		{
			point += 1;

			printf("Enter the number of your children: ");
			scanf("%d", &children);
			if(children == 0)
				point += 0;

			else if(children == 1)
				point += 1;
			
			else if(children >= 2)
				point += 2;

			else
			{
				printf("Invalid input! Try again");
				exit(0);
			}

		}
		else
		{	
			children = 0;	
		}

		printf("Gender: %c\n", gender);
		printf("Married: %c\n", marry);
		printf("Number of children: %d\n", children);
		printf("point: %d\n", point);
				

	}

	else if(gender == 'm')
	{
		printf("Did you served for Army(Yes: y, No: n)?");
		fflush(stdin);
		scanf("%c", &Army);
		if(Army == 'y')
		{
			point += 1;

			printf("Are you married?(Yes: y, No: n)");
			fflush(stdin);
			scanf("%c", &marry);
			if(marry == 'y')
				point += 1;
		}
		else
		{
			marry = 'n';
		}

		printf("Gender: %c\n", gender);
		printf("Army service: %c\n", Army);
		printf("Married: %c\n", marry);
		printf("point: %d\n", point);
		
	}
	
	else
		printf("Invalid gender input");


	return 0;
}
