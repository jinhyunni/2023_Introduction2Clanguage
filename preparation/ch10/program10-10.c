#include <stdio.h>

int main()
{
	char *first="Gildong", *last="Hong";
	char *temp; 	//교환을 위한 변수

	printf("===Before exchange===\n");
	printf("%s %s", first, last);
	

	//포인터 주소가 가리키는 변수를 바꾸는 개념!
	temp = first;
	first = last;
	last = temp;

	printf("\n===After exchange===\n");
	printf("%s %s", first, last);

	return 0;
}
