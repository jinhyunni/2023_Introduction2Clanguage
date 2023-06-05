#include <stdio.h>

int payCal(int, int, int);

int main()
{
	int total_hour;
	int daily_rate = 1e5, hourly_rate = 1e4;
	int pay;

	printf("근로시간을 입력하세요: ");
	scanf("%d", &total_hour);

	pay = payCal(total_hour, daily_rate, hourly_rate);

	printf("계산된 임금: %d\n", pay);


	return 0;
}

int payCal(int hours, int day_rate, int hour_rate)
{
	int workDay = hours/8;
	hours = hours%8;

	return(workDay*day_rate + hours*hour_rate);
}


