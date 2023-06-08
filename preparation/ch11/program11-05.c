#include <stdio.h>

#define N 10

//구조체 선언
struct person{

		char name[10];
		char gender;
		int age;
};

//함수 선언
void input_info(struct person *);
void output_info(struct person);

int main()
{
	int i;
	struct person buyer;
	
	// 사용자 입력
	printf("Input User: ");
	input_info(&buyer);		//pass by reference
	
	//출력
	output_info(buyer);	//pass by value
	
	
}

//input function definition
void input_info(struct person *p)	//pass by reference
{
	scanf("%s %c %d", p->name, &p->gender, &p->age);
}

//output function definition
void output_info(struct person user)	//pass by value
{
	printf("name: %s\n", user.name);
	printf("gender: %c\n", user.gender);
	printf("age: %d\n", user.age);
}
