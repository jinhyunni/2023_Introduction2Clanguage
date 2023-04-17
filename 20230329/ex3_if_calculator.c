#include <stdio.h>
#include <stdlib.h> //exit(0) function

int main()
{
	int num1, num2;
	double res;

	char opr; //연산자를 저장하는 변수

	printf("Type first number: \n");
	scanf("%d", &num1);

	printf("Type Second number: \n");
	scanf("%d", &num2);

	fflush(stdin);	
	printf("Type operator to perform: \n");
	scanf("%c", &opr);

	if(opr == '+'){
		res = num1 + num2;
		printf("%d %c %d = %.0lf\n", num1, opr, num2, res);
	}

	else if(opr == '-'){
		res = num1 - num2;
		printf("%d %c %d = %.0lf\n", num1, opr, num2, res);
	}

	else if(opr == '*'){
		res = num1 * num2;
		printf("%d %c %d = %.0lf\n", num1, opr, num2, res);
	}

	else if(opr == '/'){
		
		if(num2 == 0){
			printf("Not dividable with 0\n");
			exit(0);
		}
		else{	
			res = (double)num1 / (double)num2;	// '/'연산: 자동형변환 고
			printf("%d %c %d = %.1lf\n", num1, opr, num2, res);
		}
	}

	else
		printf("Unknown type of operator\n");


	return 0;
}
