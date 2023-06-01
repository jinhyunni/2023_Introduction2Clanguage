#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define sc strcmp

void rspGame(char [], char [], int*, int*, int*, int*);

int main()
{	
	char comRsp[][7] = {"가위", "바위", "보"};
	char myRsp[7];
	char choice[10];

	int random;
	int win=0, lose=0, tie=0, total=0;

	while(1)
	{	
		printf("\n");
		fflush(stdin);
		printf("게임을 시작하겠습니까?(네/아니요)");
		scanf("%s", choice);

		if(strcmp(choice, "네")==0)
		{	
			//사용자 입력
			printf("가위? 바위? 보? : ");
			scanf("%s", myRsp);
			//컴퓨터의 결정
			random = rand()%3;

			//게임 시작
			rspGame(myRsp, comRsp[random], &win, &lose, &tie, &total);	//pass by reference!

		}

		else
			break;

	}

	printf("total: %d, win: %d, lose: %d, tie: %d", total, win, lose, tie);

}


void rspGame(char input[], char com[], int *win, int *lose, int *tie, int *total)
{
	
	//사용자 입력: 가위
	if(sc(input, "가위")==0)
	{
		if(sc(com, "가위")==0)
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("비겼습니다!\n");
			*tie+=1;
		}	

		else if(sc(com, "바위")==0)
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("졌습니다!\n");
			*lose+=1;
		}	
		
		else
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("이겼습니다!\n");
			*win+=1;
		}

		*total+=1;
	}

	//사용자 입력: 바위 
	else if(sc(input, "바위")==0)
	{
		if(sc(com, "가위")==0)
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("이겼습니다!\n");
			*win+=1;
		}	

		else if(sc(com, "바위")==0)
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("비겼습니다!\n");
			*tie+=1;
		}	
		
		else
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("졌습니다!\n");
			*lose+=1;
		}

		*total+=1;
	}

	//사용자 입력: 보
	else
	{
		
		if(sc(com, "가위")==0)
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("졌습니다!\n");
			*lose+=1;
		}	

		else if(sc(com, "바위")==0)
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("이겼습니다!\n");
			*win+=1;
		}	
		
		else
		{
			printf("나: %s, 컴퓨터: %s\n", input, com);
			printf("비겼습니다!\n");
			*tie+=1;
		}

		*total+=1;
	}

}

