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
		
		
	//������ �迭�� ������
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
