#include <stdio.h>

int main()
{
	char *str[4]={"Korea", "Japan", "China", "Usa"};
	char **p=str;	//이중포인터? 
	
	int i, j;
	
		
	for(i=0; i<4; i++)
	{
		printf("*p++=%s\n", *p++);	//포인터가 증가됨 
	}
	
	p=str;		//포인터가 증가되었으므로 다시 초기화 해야한다! 
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("*(*(p+%d)+%d)=%c\n", i, j, *(*(p+i)+j));	//안돌아가는 코드! 
		}
		printf("\n");
	}
}
