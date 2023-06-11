#include <stdio.h>

void reverse(int);

int main()
{
	int n;

	scanf("%d", &n);

	reverse(n);

	return 0;
}

void reverse(int n)
{
	printf("%d ", n);

	if(n > 1)
	{
 //			printf("%d ",n);
			reverse(n-1);
	}
}
