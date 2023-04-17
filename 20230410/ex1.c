#include <stdio.h>

//다양한 모양 출력하기...다이아몬드? 모래시계?

int main()
{
	int i, j;

	for(i=1; i<=10; i++){

		for(j=1; j<=i; j++){
			printf("#");
		}

		printf("\n");

	}
		


	return 0;
}
