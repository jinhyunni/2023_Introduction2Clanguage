#include <stdio.h>

int sum(int);

int main()
{
	int n;
	printf("1~n까지의 합을 구하는 프로그램입니다.\n");
	printf("n의 값을 입력하세요: ");
	scanf("%d", &n);
	printf("1~%d 까지의 합은 %d 입니다.", n, sum(n));
}

int sum(int n)
{
	int res;

	if(n>1)
		res = sum(n-1) + n;		//재귀함수: n차 시행된 함수와 (n+1)차 시행된 함수의 res 는 같은 주소에 있다!

	else	//입력한 수가 1 일때
		res = 1;

	return res;

}
