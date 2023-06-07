#include <stdio.h>

int main()
{
	char *str = "langauge";
	int i;
	
	while(*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	
	printf("\n");
		
		
	//정수형 배열과 포인터
	int a[10];
	int *pa = a;
	for(i=0; i<10; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", pa);
		pa++;
	}
	pa = a;
	
		
	
	 
		
}
