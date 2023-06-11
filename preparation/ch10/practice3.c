#include <stdio.h>

void print_name(char (*p)[10], int);

int main()
{	
	int n;	
	char name[][10] = {"Jack", "Mike", "Poly", "Sheldon"};
	
	n = sizeof(name)/sizeof(name[0]);

	print_name(name, n);
	
}

void print_name(char (*name)[10], int n)	//받는 함수의 입장에서는 1차원 배열, 즉 배열 포인터를 가인수로 받아야 한다!
{
	int i;

	for(i=0; i<n; i++)
			printf("%s\n", *(name+i));
 //			printf("%s\n", name+i);	-> 이렇게 해도 출력이 된다...? 
	
}
