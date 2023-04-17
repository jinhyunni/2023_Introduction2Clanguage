#include <stdio.h>

int main()
{
	int n1, n2;
	double res;
	char opr;

	printf("First number: \n");
	scanf("%d", &n1);

	printf("Second number: \n");
	scanf("%d", &n2);
	
	fflush(stdin);
	printf("Operator: \n");
	scanf("%c", &opr);

	switch(opr){
	
		case '+':
			res = n1 + n2;
			printf("%d %c %d = %.0lf", n1, opr, n2, res); break;	
		case '-':
			res = n1 - n2;
			printf("%d %c %d = %.0lf", n1, opr, n2, res); break;	
		case '*':
			res = n1 * n2;
			printf("%d %c %d = %.0lf", n1, opr, n2, res); break;
		case '/':
			
			if(n2 == 0){
				//if문에는 break를 인식하지 않는다!
				printf("Not dividable with 0\n");
			}
			
			else{
				res = (double)n1/n2;
				printf("%d %c %d = %.1lf", n1, opr, n2, res);
			}
			break;

		default:
			printf("unknown type of operator!\n");

	}

	return 0;
}
