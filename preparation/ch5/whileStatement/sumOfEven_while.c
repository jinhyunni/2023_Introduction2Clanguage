#include <stdio.h>

int main()
{
	int i, n, sum=0;

	printf("Enter an integer: ");
	scanf("%d", &n);
	
	i = 0;
	while(i <= n)
	{	
		i++;	
		if(i % 2 == 1)
			continue;
			
		sum += i;

		//i++;  왜 안됨...? continue 다음 내용을 실행 X -> i가 증가하지 않음...
	}

	printf("The sum of even number: %d\n", sum);
	
}
