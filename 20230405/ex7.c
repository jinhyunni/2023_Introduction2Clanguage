#include <stdio.h>

int main()
{

	int dan, num, res;
	int input1, input2;

	printf("Input1 : ");
	scanf("%d", &input1);
	printf("Input2: ");
	scanf("%d", &input2);


	if(input1 < input2){
		for(dan = input1; dan <= input2; dan ++){
			for(num = 1; num <= 9; num++){
				res = dan * num;
				printf("%d x %d = %d\n", dan, num, res);
			}

			printf("\n");
		};
	}

	else{

		for(dan = input2; dan <= input1; dan ++){
			for(num = 1; num <= 9; num++){
				res = dan * num;
				printf("%d x %d = %d\n", dan, num, res);
			}

			printf("\n");
		};
	}

	
	//ex) 입력1: 2, 입력2: 5 -> 2단부터 5단까지 구구단 출력
	//    더 해볼것: 입력받은 두 수의 대소비교까지 해서 input 1 이 더 작으면 증감하는 순서로, input2 가 더 작으면 감소하는 순서로 구구단 출력하기
}
