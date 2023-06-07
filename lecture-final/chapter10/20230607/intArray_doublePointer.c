#include <stdio.h>

int main()
{
	int array[][3]={{10, 20, 30}, {40, 50, 60}};
	// int **p = array; // ¿¿¿ ¿¿¿¿ ¿¿¿
	int (*p)[3]=array; //¿¿¿ ¿¿¿ ¿¿¿ ¿¿¿¿ ¿¿!! 
	
	int i, j;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			printf("*(*(p+%d)+%d)=%c\n", i, j, *(*(p+i)+j));
			
		printf("\n");
	}	
} 
