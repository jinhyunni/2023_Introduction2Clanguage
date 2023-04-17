#include <stdio.h>

int main()
{
	// -1을 입력할때까지 반복을 계속하기
	
	int n;
	
	//0이 아닌 정수는 모두 참값으로 인식한다.
	while(1)
	{
		printf("Input an integer(Enter -1 to stop the program): ");
		scanf("%d", &n);

		if(n == -1)
			break;

	}


	return 0;
}
