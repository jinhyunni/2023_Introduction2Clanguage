#include <stdio.h>

int main()
{
	int n;
	
	//0 이외의 모든 값은 참!
	//n값이 0미만이면 다시 입력받
	while(1)
	{
		printf("필요한 물건의 개수는?\n");
		scanf("%d", &n);

		if(n>=0)
			break;
		printf("잘못된 정수를 입력하였습니다\n");
	}
	
}	
