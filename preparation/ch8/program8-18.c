//배열의 크기와 상관없이 배열의 원소들의 평균값을 구하는 함수

#include <stdio.h>

double avgCal(int arr[], int n);

int main()
{
	int pen[4] = {4500, 5470, 4920, 6090};
	int monthly_stock[12]={505, 409, 389, 257, 450, 501, 500, 621, 480, 350, 389, 250};

	printf("펜의 평균 판매수: %.1lf\n", avgCal(pen, 4));
	printf("펜의 평균 재고량: %.1lf\n", avgCal(monthly_stock, 12));

	return 0;
}

double avgCal(int arr[], int n)
{
	int i;
	double avg=0;		//누적변수는 항상 초기화!
	
	for(i=0; i<n; i++)
	{
		avg += arr[i];
	}

	return((double)avg/n);
}
