#include <stdio.h>

//함수 외부에서 정의된 구조체는 정의 아래쪽의 모든 함수에서 사용 가능
//힘수 안에서 정의된 구조체는 함수 안에서만 사용 가능

//구조체 선언
struct game{
	char name[7];		//플레이어의 이름 저장	
	int R1, R2, R3;		//각 라운드의 점수를 저장
};

int main()
{
	double avg;
	struct game player; //구조체 변수 선언

	printf("player's name: ");
	scanf("%s", player.name);

	printf("Score of round 1, 2, 3?: ");
	scanf("%d %d %d", &player.R1, &player.R2, &player.R3);

	avg = (double)(player.R1 + player.R2 + player.R3)/3;

	printf("%s's average score: %lf\n", player.name, avg);

	return 0;

}
