#include <stdio.h>

int main()
{	
	int kor, mat, eng;
	int sum=0;	//누적할 변수는 초기화한다.
	double avg;

	char grade; //학점을 저장할 변수

	printf("국어점수를 입력하세요: \n");
	scanf("%d", &kor);

	printf("영어점수를 입력하세요: \n");
	scanf("%d", &eng);
	
	printf("수학점수를 입력하세요: \n");
	scanf("%d", &mat);
	
	sum = kor + eng + mat;
	avg = sum/3.;	//자동형변환을 고려하여 나누는 값을 처리해야 한다.

	//등급을 구한다
	//범위의 하한값을 적어준
	if(avg >= 90)
			grade = 'A';
	else if(avg >= 80)
			grade = 'B';
	else if(avg >= 70)
			grade = 'C';
	else if(avg >= 60)
			grade = 'D';
	else
			grade = 'F';

	//결과를 출력한다.
	printf("총점: %d\n", sum);
	printf("평균: %.1f\n", avg);
	printf("등급: %c", grade);



	return 0;
}
