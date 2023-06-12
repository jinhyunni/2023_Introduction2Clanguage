#include <stdio.h>

struct sangpum{
	
	char name[10];
	int pi;
	int po;
	
};

int main()
{
	int i;
	
	//구조체 선언 및 초기화
	struct sangpum sv={"사과", 200, 300};	//구조체 변수
	
	//구조체 배열
	struct sangpum sa[3]={
		{"포도", 300, 400},
		{"딸기", 500, 600},
		{"멜론", 700, 800}
	};
	
	//구조체 포인터 선언
	struct sangpum *p = sa; 
	
	
	//구조체 변수 참조
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
		printf("(*(p+%d)).name=%s\n", i, (*(p+i)).name);
		printf("(*(p+%d)).pi=%d\n", i, (*(p+i)).pi);
		printf("(*(p+%d)).po=%d\n\n", i, (*(p+i)).po);
		
	}
	
	
	return 0;
	
	
}

