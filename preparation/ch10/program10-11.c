#include <stdio.h>
#include <string.h>	//strcpy함수의 이용

#define N 10

int main()
{	
	char first[N] = "Gildong", last[N]="Hong";
	char temp[N];

	printf("%s %s\n", first, last);
	
	strcpy(temp, first);
	strcpy(first, last);
	strcpy(last, temp);

	printf("%s %s\n", first, last);

	return 0;
}
