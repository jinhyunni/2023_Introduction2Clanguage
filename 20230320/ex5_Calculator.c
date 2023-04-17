#include <stdio.h>

int main()
{
	//사칙연산의 결과과 예상한 대로 나오는지??

	int n1, n2;
	double res;		//결과를 double type으로 지정

	printf("first number:");
	scanf("%d", &n1);

	printf("second number:");
	scanf("%d", &n2);
	
	printf("%d + %d = %d\n", n1, n2, n1+n2);
	printf("%d - %d = %d\n", n1, n2, n1-n2);
	printf("%d x %d = %d\n", n1, n2, n1*n2);
	printf("%d / %d = %d\n", n1, n2, n1/n2); //-> 여기서 결과값이 0으로 나옴...

	//정수 + 정수 -> double type으로 지정
	// 정수/정수 -> double type으로 지정... 출력값이 이상하게 나옴
	//다음시간에 해결해보자^^

	return 0;
}
