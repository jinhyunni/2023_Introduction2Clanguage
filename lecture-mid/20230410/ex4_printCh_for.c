#include <stdio.h>

int main()
{
	char start, ch;
	

	//문자 -> ASCII code로 저장되기 때문에 연산이 가능하다!

	for(start = 'z'; start >= 'a'; start--)
	{
		for(ch='a'; ch<start; ch++)
		{
			printf(" ");
		}

		for(ch=start; ch<='z'; ch++)
		{	
			printf("%c", ch);
		}

		printf("\n");
	}


	return 0;	
}
