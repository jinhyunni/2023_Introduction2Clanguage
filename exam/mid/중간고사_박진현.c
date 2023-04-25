#include <stdio.h>

int main()
{	
	int n, max, i, sum=0;

	printf("최대 몇개까지의 소수를 출력? ");
	scanf("%d", &max);

	n=2;

	while(n <= max)
	{
		//n++;

		for(i=2; i<=n-1; i++)
		{	
			if(n%i==0)
				sum+=1;

		}
		
		if(sum==0)
			printf("%d ", n);



		n++;
		sum = 0;
	}
			



	return 0;
}
