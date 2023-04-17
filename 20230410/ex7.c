#include <stdio.h>

int main()
{
	int i, n, sum=0;

	printf("input an integer: ");
	scanf("%d", &n);

	i=0;

	while(i<n)
	{
		i++;
		if(i%2)
			continue;
		sum += i;
	
	}
	
	printf("정수 1에서 %d 이하의 짝수들의 합은 %d 이다.", n,sum);

	return 0;
}
