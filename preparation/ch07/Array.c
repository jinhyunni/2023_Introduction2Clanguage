#include <stdio.h>

#define N 5

int main()
{
	char name[N]="Jack";
	int i;

	//주소표현
	for(i=0; i<N; i++)
	{
		printf("The Address of name[%d] is : %p\n", i, &name[i]);
	}

	printf("\n\n");

	
	for(i=0; i<N; i++)
	{
		printf("The Address of name[%d] is : %p\n", i, name+i);
	}

	printf("\n\n");

	//값 표현
	for(i=0; i<N; i++)
	{
		printf("The content of name[%d] is : %c\n", i, name[i]);
	}

}
