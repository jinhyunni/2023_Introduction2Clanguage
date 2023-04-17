#include <stdio.h>

int main()
{
	int dan, num, res;
	
	printf("구구단을 외우자\n");
	printf("단을 입력하세요: : \n");
	scanf("%d", &dan);

	for(num = 1; num <= 9; num++){
		res = dan*num;
		printf("%d x %d = %d\t", dan, num, res);
	}


	return 0;
}
