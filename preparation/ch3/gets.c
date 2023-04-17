#include <stdio.h>

int main()
{	
	char s1[20];
	char s2[20];

	//Getting strings with scanf() function
	printf("Input a string(Hong GilDong): ");	//뛰어쓰기 단위까지 입력된다. 그 다음은 다음 문장으로 입력된다.
	scanf("%s", s1);
	printf("String: %s\n", s1); //array -> already a pointer!
	

	//Getting strings with gets() function
	fflush(stdin);
	printf("Input a string(Hong GilDong): ");
 //	gets(s2);	//considered unsafe because of buffer overflow. Instead, use fgets() function!

	fgets(s2, 20, stdin);

	printf("String: %s\n", s2);

	return 0;
}
