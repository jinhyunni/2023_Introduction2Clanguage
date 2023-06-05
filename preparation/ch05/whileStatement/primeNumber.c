#include <stdio.h>

int main()
{
	int i, input, count=0;

	while(1)
	{	
		printf("Enter a number(press -1 to stop the program): ");
		scanf("%d", &input);
		
		if(input == -1)
		{	break;
		}

		else
				for(i=2; i<=(input/2); i++)
				{
					if( (input % i) != 0)
					{	
						printf("%d is not a prime number\n", input);
						break;
					}
				
					else
						count += 1;
				}
		
		if(count != 0)
		{
			printf("%d is prime number", input);
			count = 0;
		}
	}

	return 0;
}
