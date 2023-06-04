#include <stdio.h>

int main()
{	
	char id[15];
	char name[4];

	printf("이름을 입력하세요: ");
	gets(name);
	printf("주민등록번호를 입력하세요: ");
	scanf("%s", id);

	//생년월일과 성별 출력하기
	printf("--------------------\n");
	printf("이름: %s\n", name);
	printf("생년월일: %c%c년 %c%c월 %c%c일\n", id[0], id[1], id[2], id[3], id[4], id[5]);
	
	//성별 판별하기
	if(id[7] == '1' || id[7] == '3')
		printf("성별: male\n");
	else
		printf("성별: female\n");

	return 0;
}
