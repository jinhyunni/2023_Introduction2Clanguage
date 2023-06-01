#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void evalRsp(char computer[], char mine[]);

int main()
{
	char rsp[][7]={"가위\0", "바위\0", "보\0"};	//컴퓨터가 낼 가위, 바위, 보를 저장한 문자열 
	char myrsp[7];
	int random, i;

	//씨드 함수를 사용
	srand(time(NULL));

	for(i=0; i<3; i++)
	{
		printf("가위 바위 보!: ");
		scanf("%s", myrsp);

		//컴퓨터의 선택
		random=rand()%3;
		
		//가위 바위 보 함수 호출
		evalRsp(rsp[random], myrsp);
		printf("\n");
		
	}

}

//나를 기준으로 전/승/무/패를 출력한다.
//무한루프를 돌면서 사용자의 의지를 물어보아 게임을 계속 할지 말지 결정한다.

void evalRsp(char computer[], char mine[])
{
 
	if(strcmp(mine, "가위") == 0)
	{
		if(strcmp(computer, "가위") == 0)	//가인수의 입장에서는 컴퓨터가 입력한 문자열은 1차원이다!
			printf("mine: %s, compter: %s, 비겼습니다!\n", mine, computer);
		
		else if(strcmp(computer, "바위")==0)
			printf("mine: %s, compter: %s, 졌습니다!\n", mine, computer);

		else	
			printf("mine: %s, compter: %s, 이겼습니다!\n", mine, computer);

	}
	
	else if(strcmp(mine, "바위") == 0)
	{
		if(strcmp(computer, "가위") == 0)
			printf("mine: %s, compter: %s, 이겼습니다!\n", mine, computer);
		
		else if(strcmp(computer, "바위")==0)
			printf("mine: %s, compter: %s, 비겼습니다!\n", mine, computer);

		else
			printf("mine: %s, compter: %s, 졌습니다!\n", mine, computer);

	}

	else
	{
		if(strcmp(computer, "가위") == 0)
			printf("mine: %s, compter: %s, 졌습니다!\n", mine, computer);
		
		else if(strcmp(computer, "바위")==0)
			printf("mine: %s, compter: %s, 이겼습니다!\n", mine, computer);

		else
			printf("mine: %s, compter: %s, 비겼습니다!\n", mine, computer);

	}
 
}
