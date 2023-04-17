#include <stdio.h>

int main()
{
	int input1;
	
	while(1)
	{
		printf("Enter a positive integer(enter -1 to stop the program):: ");
		scanf("%d", &input1);
		
		if(input1 == -1)
			break;

		else if(input1%2==0)
			printf("Input number is even\n");

		else
			printf("Input number is odd\n");

	
	}

	return 0;
}
