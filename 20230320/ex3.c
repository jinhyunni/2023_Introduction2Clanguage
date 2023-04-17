#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;	//scanf함수에서는 %lf와 %f를 구별한다! 맞춰서 써줘야 한다!!


	//자료 입력 받기
	printf("gender?(Male: M, Female: F)");
	scanf("%c",&gender);
	printf("age?");
	scanf("%d", &age);
	printf("height?");
	scanf("%lf", &height);

	//결과 출력하기
	printf("\n===========\n");
	printf("gender: %c\n", gender);
	printf("age: %d\n", age);
	printf("height: %lf\n", height);

	return 0;
	
}
