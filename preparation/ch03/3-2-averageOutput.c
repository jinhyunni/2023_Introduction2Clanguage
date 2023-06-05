#include <stdio.h>

//학번: 202012122, 국어, 세계사, 수학 점수
//세 점수를 세로로 나란히 맞추어 출력하기
//평균점수는 소숫점 아래 두자리까지 출력하기

int main()
{
	int std_no, kor, his, mat;
	double avg;
	
	printf("학번을 입력하세요: ");
	scanf("%d", &std_no);
	printf("국어점수를 입력하세요: ");
	scanf("%d", &kor);
	printf("역사점수를 입력하세요: ");	
	scanf("%d", &his);
	printf("수학점수를 입력하세요: ");
	scanf("%d", &mat);
	
	//평균점수 계산
	avg = (kor + his + mat)/3.0;
	
	//print out
	printf("%-8s: %d\n", "학번", std_no);
	printf("===============\n");
	printf("%-8s: %5d(점)\n", "국어", kor);
	printf("%-8s: %5d(점)\n", "세계사", his);
	printf("%-8s: %5d(점)\n", "수학", mat);
	printf("===============\n");
	printf("%-8s: %7.2lf(점)\n", "평균", avg);


	return 0;	
}
