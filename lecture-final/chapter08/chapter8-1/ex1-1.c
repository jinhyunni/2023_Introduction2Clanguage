#include <stdio.h>
int add(int n1, int n2);	//void add(int, int); 가인수의 데이터 형명만 써주어도 상관없다.
//add 함수의 정의가 main함수 보다 먼저 되었다면 함수의 선언 부분은 생략이 가능하다

int main()
{
	int num1, num2, ans;

	printf("정수 2개를 입력하세요: ");
	scanf("%d%d", &num1, &num2);

	ans = add(num1, num2);	//실인수, 함수의 호출

	printf("%d + %d = %d\n", num1, num2, ans);

}

//반환값이 존재하는 함수 
int add(int n1, int n2)	//n1, n2: 가인수, 함수의 정의 
{
	int res;

	res = n1 + n2;

	return(res);

}
