#include <stdio.h>
#define N 4

double average_compute(int []);

int main()
{
	int notebook[N]={2507, 2232, 2009, 2890};
	int pen[N]={4527, 5370, 4923, 6097};
	int i, sum;

	printf("노트북의 평균 판매수: %.1lf\n", average_compute(notebook));
	printf("펜의 평균 판매수: %.1lf\n", average_compute(pen));

}

double average_compute(int arr[])
{
	int i;
	double avg=0.;

	for(i=0; i<N; i++)
	{
		avg += arr[i];
	}

	return((double)avg/N);
}
