#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;
	
	//성별입력...뒤에 두면 입력이 안된다...
	//서로 다른 타입의 데이터를 입력받을때 데이터 타입의 순서에 따라서 입력이 될 수 도 있고 안 될 수도 있다
	//키보드 버퍼..!! 임시기억장소...!!
	//문자 자료를 입력받을때는 공백문자도 입력문자로 사용된다..!!
	//따라서...문자는 맨 처음에 입력받는게 좋음
	//중간에 문자를 입력 받으려면...
	//fflush(stdin) : 키보드 버퍼의 내용을 지우는 함수 -> 문자를 입력받기 전에 키보드 버퍼를 비워줘야 한다!!

	printf("age?");
	scanf("%d", &age);

	printf("height?");
	scanf("%lf", &height);

	fflush(stdin); //키보드 버퍼를 지워주는 함수!!

	printf("gender?(Male: M, Female: F)");
	scanf("%c", &gender);

	printf("gender: %c\n", gender);
	printf("age: %d\n", age);
	printf("height: %lf\n", height);

	return 0;
}
