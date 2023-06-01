#include <stdio.h>

void print_title(void);
void print_information(void);

int main()
{
	print_title();
	print_information();

	return 0;
}

void print_title(void)
{
	printf("==============\n");
	printf("제목을 입력하세요\n");
	printf("==============\n");
}

void print_information()
{

	printf("\n\n");
	printf("%30s\n", "부산대학교");
	printf("%30s\n", "물리학과");
	printf("%30s\n", "박진현");

}
