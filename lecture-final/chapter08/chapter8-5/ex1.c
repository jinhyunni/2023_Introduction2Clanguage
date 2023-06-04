#include <stdio.h>

void reverse(int);

int main()
{	
	int n;

	printf("n~1까지 출력하는 프로그램입니다.\n");
	printf("n을 입력하세요: ");
	scanf("%d", &n);

	reverse(n);
}

void reverse(int n)
{	
	printf("%d\n", n);

	if(n > 1)	//재귀함수를 정지시킬 조건
		reverse(n-1);	//재귀함수! 함수 안에서 자기 자신을 호출!
}
