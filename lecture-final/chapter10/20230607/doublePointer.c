#include <stdio.h>

int main()
{
	char *str[4]={"Korea", "Japan", "China", "USA"};	//char-type pointer array
	char **p = str;

	int i, j;

	for(i=0; i<4; i++)
	{
		printf("*p++=%s\n", *p++);
	}

	p=str;

	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("*(*(p+%d)+%d)=%c\n", i, j, *(*(p+i)+j));
		}
		printf("\n");
	}
}
