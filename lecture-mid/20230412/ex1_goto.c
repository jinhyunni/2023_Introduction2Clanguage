#include <stdio.h>
#include <conio.h>		// 터미널에서는 지원 안함...?
#include <stdlib.h>

int main()
{
	int i, j;

	for(i=1; i<=1e4; i++)
	{
		for(j=1; j<=10; j++)
		{
			if(kbhit())
				goto end;
			printf("#");
		}
		printf("\n");
	}
	printf("\n End program");
	exit(0);

	end:
		printf("\n Input from keyboard");

	return 0;
}
