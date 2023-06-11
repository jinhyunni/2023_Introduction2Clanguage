#include <stdio.h>

void print_names(char **, int);

int main()
{	
	int n, i;
	char *names[]={"James", "Mike", "Juila", "vincent", "Cooper"};		//얘는 1차원 배열?
																		
	/*
	
	   char *names[]에서 []안에 들어가는 숫자의 의미

	   -> 1. '*' 연산자보다 '[]'연산자의 우선순위가 더 높다. 따라서 선언한 것은 배열이다!
	   -> 2. 배열에 저장된 자료형은 char type 원소를 가리키는 주소이다.
	   -> 3. []안에 들어간 숫자는 배열의 원소의 개수이다.
	   -> 즉, char *names[10]: char형 변수를 가리키는 포인터 10개를 저장한 "포인터 배열"!

	   */

	n = sizeof(names)/sizeof(names[0]);	

	/*

			배열에는 같은 형의 자료들이 저장된다. 즉, 한 원소가 차지하는 바이트 수는 모두 같다 
			sizeof(names): names 배열이 차지하는 전체 메모리를 바이트수로 반환.
			sizeof(names[0]): names 배열의 한 원소가 차지하는 메모리를 바이트수로 반환.
			n=sizeof(names)/sizeof(names[0]): names 배열에 저장된 원소의 개수

	*/
	
	
	//names[]배열에 저장된 것?
	printf("====names[]배열에 저장된 자료형?====\n");
	for(i=0; i<5; i++)
	{
		printf("names[%d]=%p\n", i, names[i]);
	}
	
	printf("\n====활용====\n");
	for(i=0; i<5; i++)
	{
		printf("&(*names[%d])=%s\n", i, &(*names[i]));
		/*
		
				*name[i]: name[i]에 해당하는 주소를 참조
				->
				name[i]: 각 문자열의 첫 원소의 주소
				*name[i]: 각 문자열의  첫번째 원소를 출력한다.
				&(*name[i]): 각 문자열의 첫번째 원소의 주소를 반환 : printf()와 만났을때 전체 문자열을 출력한다!
				-> 표현이 난해하다...

		   */
	}
 

 // names 배열의 각 원소가 차지하는 byte 수:
 //	for(i=0; i<5; i++)
 //	{
 //		printf("sizeof(names[%d])=%d\n", i, sizeof(names[i]));
 //	}

 //	printf("\n\n%d\n\n", n);

	printf("\n===함수를 이용한 출력===\n\n");

	print_names(names, n);	//names 배열의 첫 원소의 주소를 함수로 넘김, n: names 배열의 원소의 개수
	
}


//이중포인터를 함수의 가인수로 받았을때 이름을 출력하기 쉽다...
void print_names(char **p, int n)		//void print_names(char **, int n);
{
	int i;

	for(i=0; i<n; i++)
		printf("%s\n", *p++);

}
