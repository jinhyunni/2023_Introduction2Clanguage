#include <stdio.h>

int main()
{
	int kor, mat, eng;
	int sum;
	double avg;
	
	//scanf함수 -> 변수의 주소를 반환해야 한다!!!
	printf("Korean score?");
	scanf("%d", &kor);
	
	printf("English score?");
	scanf("%d", &eng);

	printf("Math score?");
	scanf("%d", &mat);

	sum = kor + mat + eng;
	avg = sum/3.0;		//정수\실수 -> 실수 이므로 3 으로 나누기보다 3.0 으로 나눠야 한다


	printf("total score: %d\n", sum);
	printf("average score: %lf", avg);
}
