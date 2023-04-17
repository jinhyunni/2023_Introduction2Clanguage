#include <stdio.h>

int main()
{
	//홀수 짝수 판별하는 코드!
	
	int num1;

	printf("정수 하나를 입력하세요: \n");
	scanf("%d", &num1);

	if(num1%2==0)
		printf("%d는 짝수입니다\n", num1);
	else
		printf("%d는 홀수입니다\n", num1);
	
	

	return 0;
}
