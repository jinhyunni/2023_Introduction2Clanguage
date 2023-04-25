#include <stdio.h>

int main()
{
	int n1;
	int sum=0;
	int num=0;

	int max=0,  min=10;

	while(1)
	{	
		printf("숫자를 입력하세요: ");
		scanf("%d", &n1);


		if(n1 >= 1 && n1 <= 10)
		{
			if(n1 % 3 == 0)
			{
				
				num += 1; 	//3의 배수의 개수
				sum += n1;  //3의 배수들의 합
			}

			if(n1 > max)
				max = n1;
				
			if(n1 < min)
				min = n1;
			
		}
		
		else
			break;

	
	}
	
	printf("최솟값: %d\n", min);
	printf("최댓값: %d\n\n", max);

	printf("3의 배수의 개수: %d\n", num);
	printf("3의 배수의 합: %d\n", sum);
	printf("3의 배수의 평균: %.1lf\n", (double)sum/(double)num);
	
	
}
