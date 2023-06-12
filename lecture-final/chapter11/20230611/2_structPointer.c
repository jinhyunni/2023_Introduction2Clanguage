#include <stdio.h>


//구조체를 정의한느 방법: typedef와 같이 쓰기!
typedef struct sanggpum{
	
	char name[10];
	int pi;
	int po;
	
}PR;


int main()
{
	int i;
	
	//구조체 변수 선언 및 초기화
	PR sv={"사과˙", 200, 300} ;	//구조체 변수
	
	//구조체 배열
	PR sa[3]={
		{"포도", 300, 400},
		{"딸기", 500, 600},
		{"멜론", 700, 800}
	};
	
	//구조체 포인터 선언
	PR *p = sa; 
	
	
	//구조체 변수 참조론
	printf("====구조체 변수 참조====\n");
	printf("sv.name => %s\n", sv.name);
	printf("sv.pi = %d\n", sv.pi); 
	printf("sv.po = %d\n", sv.po);
	
	//구조체 배열 참조
	printf("\n====구조체 배열 참조====\n");
	for(i=0; i<3; i++)
	{
		printf("sa[%d].name => %s\n", i, sa[i].name);	
		printf("sa[%d].pi => %d\n", i, sa[i].pi);
		printf("sa[%d].po => %d\n\n", i, sa[i].po);
	} 
	
	//구조체 포인터 참조
	printf("====구조체 포인터 참조====\n");
		
	for(i=0; i<3; i++)
	{
		printf("p->name=%s\n", p->name);	//구조체 연산자 '->' 사용
		printf("p->pi=%d\n", p->pi);
		printf("p->po=%d\n", p->po);
		
		p++;	//포인터의 증가
	}
	
	
	
	
	
	return 0;	
	
	
}

