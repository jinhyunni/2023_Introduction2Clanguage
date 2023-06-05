#include <stdio.h>

void leap_year(int);
void day_print(int year, int validation);

int main()
{
	int year;

	printf("윤년 여부를 알고싶은 년도를 입력하세요: ");
	scanf("%d\n", &year);
	
	leap_year(year);

	return 0;
}

void leap_year(int y)
{

	int valid;

	if((y%4 == 0 && y%100 != 0) || y == 400)
		valid = 1;
	else
		valid = 0;

	day_print(y, valid);
	
}

void day_print(int y, int val)
{
	if(val == 1)
		printf("%d는 윤년입니다. 해당 년도는 총 366일이 있습니다.", y);
	if(val == 0)
		printf("%d는 윤년이 아닙니다. 해당 년도는 총 365일이 있습니다.", y);
}


