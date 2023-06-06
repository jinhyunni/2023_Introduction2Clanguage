#include <stdio.h>

int main()
{
	int i;

	// 구조체 선언

	struct prod{
		
			char name[10];
			int p_i;	//price in
			int p_o;	//price out
	};
	
	struct prod st={"Apple", 800, 900};	//구조체 변수의 초기화! 순서대로 입력!
	struct prod sa[3]={{"Apple", 800, 900}, {"Orange", 900, 1000}, {"Banana", 1000, 1200}};	//구조체 배열의 초기화
	struct prod *sp=sa; //구조체 배열 sa의 주소를 sp에 넣는다!
	

	//구조체 변수 출력
	printf("====구조체 변수 출력====\n");
	printf("st.name=%s\n", st.name);
	printf("st.p_i=%d\n", st.p_i);
	printf("st.p_o=%d\n", st. p_o);
	
	//구조체 배열 출력
	printf("\n====구조체 배열 출력====\n");

	for(i=0; i<3; i++)
	{
		printf("sa[%d].name=%s\n", i, sa[i].name);
		printf("sa[%d].p_i=%d\n", i, sa[i].p_i);
		printf("sa[%d].p_o=%d\n\n", i, sa[i].p_o);
	}
	
	
	//구조체 포인터 출력
	printf("\n====구조체 포인터====\n");

	for(i=0; i<3; i++)
	{
		printf("sp->name=%s\n", sp->name);	// -> : 구조체 연산자
		printf("sp->p_i=%d\n", sp->p_i);
		printf("sp->p_o=%d\n\n", sp->p_o);
		sp++;	//sp가 가리키는 주소를 증가!
	}
		sp = sa;	
	//
	
	printf("\n++++배열과 포인터의 형식을 혼용하기++++\n");
	printf("(*(sa+0)).name = %s\n", (*(sa+0)).name);	//배열이지만 포인터로 사용
	printf("sp[1].name = %s\n", sp[1].name);			//포인터이지만 배열로 사용
	printf("(*(sp+2)).name = %s\n", (*(sp+2)).name);	// -> 연산자 대신 . 연산자를 사용

	return 0;
}
