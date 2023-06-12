#include <stdio.h>

#define N 100

int count;	//전역변수 : 자동으로 0으로 초기화 됨

struct person{
	
		char name[10];
		char gender;
		int age;
};

void input_info(struct person []);	//학생의 정보를 입력하는 함수
void print_info(struct person []);	//학생의 정보를 출력하는 함수

int main()
{	
	int i;	
	struct person grp[100];
	
	//사용자 정보 입력하기
	input_info(grp);	//count: 입력 받은 구조체의 개수
								//배열의 모든 원소를 함수로 넘길때는 (only) pass by reference method
	
 //	for(i=0; i<count; i++)
 //	{
 //		printf("grp[%d]:", i);
 //		printf("%s %c %d\n", grp[i].name, grp[i].gender, grp[i].age);
 //	}

	//사용자 정보 출력하기
	print_info(grp);	//함수에 배열 전체를 넘겨줌 -> 배열 전체를 넘기는 방법: (only) pass by reference!

	/*
		실인수가 가지고 있는 데이터: 배열의 첫 원소의 주소, 즉 가인수는 "주소"를 전달 받으므로...
		'구조체 포인터'를 가인수로 써줘야 할것이다.

		그런데 가인수로 구조체 배열을 써도 문법적으로 틀린것이 없다고 나온다
		-> 포인터와 배열이 문법을 혼용하기 때문? 그렇지만 문법을 혼용할 뿐,
		선언은 제대로 해줘야 하는게 맞지 않은가????????
	*/

	return 0;

}

void input_info(struct person grp[])
{
	int i=1;

	while(i==1 && count < 100)
	{
		printf("name: ");
 //		scanf("%s", (grp+count)->name);
		gets((grp+count)->name);	//name member: 배열! 따라서 배열명이 곧 주소!

		printf("gender(M/F): ");
		scanf("%c", &(grp+count)->gender);

		printf("age: ");
		scanf("%d", &(grp+count)->age);
		
		printf("Continue(1)/Stop(0):");
		scanf("%d", &i);
		printf("\n\n");

		
		fflush(stdin);
		count++;

	}
}

void print_info(struct person *grp)	//가인수를 struct person grp[]으로 해도 되는가? -> 너는 pass by vlaue?
{
	int i;

	printf("=====User information=====\n");
	printf("name	gender	age\n");
	printf("==========================\n");
	for(i=0; i<count; i++)
	{
		printf("%s	  %c	%d\n", (grp+i)->name, (grp+i)->gender, (grp+i)->age);
		/*
			구조체 포인터가 가리키는 구조체의 멤버에 접근하기
			'->' 연산자의 사용!!!
			'.'연산자를 사용하고 싶다면  (*(grp+i)).member 으로도 사용 가능하다!
			아니면 (*grp++).member로 사용 가능하다. 주의할점: 루프를 다 돌고 다시 포인터의 위치를 돌려놓을것!
			(++연산자의 우선순위가 *연산자의 우선순위보다 높다!)
		*/
		
 //		printf("%s	  %c	%d\n", (*(grp+i)).name,  (*(grp+i)).gender, (*(grp+i)).age);
 // 		printf("%s	  %c	%d\n", (*grp++).name,  (*grp++).gender, (*grp++).age);	//에러가 난다... 왜?
	}
}
