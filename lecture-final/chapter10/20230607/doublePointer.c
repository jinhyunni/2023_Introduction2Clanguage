#include <stdio.h>

int main()
{
	char *str[4]={"Korea", "Japan", "China", "Usa"};
	char **p=str;	//����������? 
	
	int i, j;
	
		
	for(i=0; i<4; i++)
	{
		printf("*p++=%s\n", *p++);	//�����Ͱ� ������ 
	}
	
	p=str;		//�����Ͱ� �����Ǿ����Ƿ� �ٽ� �ʱ�ȭ �ؾ��Ѵ�! 
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("*(*(p+%d)+%d)=%c\n", i, j, *(*(p+i)+j));	//�ȵ��ư��� �ڵ�! 
		}
		printf("\n");
	}
}
