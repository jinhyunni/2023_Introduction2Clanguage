#include <stdio.h>

int main()
{
	char name[10] = "Jinhyun";

	printf("%s\n", "Hello");
	printf("My name is %4s\n", name);
	printf("%c\n",name[3]);
	printf("%-20s %-5s\n", "Nice to meet you", "Bye!");

	return 0;
}
