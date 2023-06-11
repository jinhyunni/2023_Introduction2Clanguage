#include <stdio.h>

struct student{
	
		char name[10];
		char gender;
		int grade;
};

void print_info(struct student *);

int main()
{
	
	struct student s1 = {"Jinhyun", 'M', 100};

	print_info(&s1);	//구조체의 포인터를 실인수로 넘겨줌!

	return 0;
}

void print_info(struct student *s)
{
	printf("%s\n", s->name);
	printf("%c\n", s->gender);
	printf("%d\n", s->grade);
}

