#include <stdio.h>

int main()
{
	int i, n, sum; 

	while(1)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &n);

		if(n == -1)
				break;
		
		sum=0;		//누적변수 왜 여기서 초기화...?
					//정수를 반복하여 입력받기 때문!!
					//한번 연산을 시행한 후, sum이라는 누적 변수를 초기화 해야한다

		for(i=1; i<=n; i++){
			sum += i;
		}
		
		printf("1~%d까지의 합은 %d\n", n, sum);

	}

	printf("프로그램 종료");
}
