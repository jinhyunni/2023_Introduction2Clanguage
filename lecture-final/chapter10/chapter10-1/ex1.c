#include <stdio.h>

int main()
{
	int a=10;
	int *p = &a;

	printf("a=%d\n", a);	//a의 값
	printf("&a=%X\n", &a);	//변수 a의 주소
	printf("*p=%d\n", *p);	//p가 a의 주소를 참조하고 있기 때문에 같은 값이 나온다.
	printf("p = %X\n\n", p);//포인터 변수 p에 저장된 주소, a의 주소와 동일

	a += 10;
	
	printf("a=%d\n", a);	//a의 값
	printf("&a=%X\n", &a);	//a의 주소
	printf("*p=%d\n", *p);	//
	printf("p = %X\n", p);
	printf("&p=%X\n\n", &p);	//포인터 p의 주소, a의 주소와 다르다!

	*p = *p + 10;		//*p: 포인터 변수 p가 가리키고 있는 주소에 저장된 값!

	printf("a=%d\n", a);	
	printf("&a=%X\n", &a);	
	printf("*p=%d\n", *p);
	printf("p = %X\n\n", p);



	 return 0;
}
