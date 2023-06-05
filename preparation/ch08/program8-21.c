#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int com, guess; 
	int trial=0;
	
	srand(time(NULL));
	com = random()%100+1;

	printf("%d", com);

	printf("컴퓨터가 1~100 사이의 수를 숨겼습니다!\n");
	
	while(1)
	{
		printf("guess?: ");
		scanf("%d", &guess);

		if(guess != com)
		{
			printf("Try again!\n");
			trial++;
		}
		else
			break;
	}

	printf("================\n");
	printf("정답: %d\n", com);
	printf("시도 횟수: %d\n", trial);

}
