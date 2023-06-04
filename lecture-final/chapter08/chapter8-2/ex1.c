//사칙연산을 수행하는 함수 만들기

#include <stdio.h>

//함수 선언
/*
	함수 안에 함수가 정의되어 있을 경우,
	가장 안쪽에 정의되어있는 함수부터 차례로 정의하면
	함수의 선언을 생략할 수 있다.

	ex) f(g(h(n)))

		h
		|
		g
		|
		f
		|
	  main
*/


void prt(int n1, int n2, double res, char op)
{
	printf("%d %c %d = %lf", n1, op, n2, res);
}


void operation(int n1, int n2, char op)
{	
	double res;

	if(op == '+')
	{
		res = n1 + n2;
		prt(n1, n2, res, op);
	}
	
	else if(op == '-')
	{
		res = n1 - n2;
		prt(n1, n2, res, op)
	}

	else if(op == 'x')
	{
		res = n1 * n2;
		prt(n1, n2, res, op);
	}
		
	else if(op == '/')
	{
		res = (double)n1/n2;
		prt(n1, n2, res, op);
	}

	else
		printf("입력하신 연산자를 확인하세요");
}
	


int main()
{
	int number1, number2;
	char opr;

	printf("연산자를 입력하세요: ");
	scanf("%c", &opr);

	printf("연산을 수행할 숫자 2개를 입력하세요: ");
	scanf("%d%d", &number1, &number2);

	operation(number1, number2, opr);	//함수 호출

}



