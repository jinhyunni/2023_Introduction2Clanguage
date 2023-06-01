#include <stdio.h>

int main()
{
	int a[2][3];
	int row, col;
	
	//이중 배열의 입력
	for(row=0; row<2; row++)
	{
		for(col=0; col<3; col++)
		{
			printf("%d행 %d열 입력: ", row+1, col+1);
			scanf("%d", a[row]+col);	//주소 표현에 주의할것!
										//주소 연산자 &를 사용: scanf("%d", &a[row][col]);
		}
	}

	//이중배열의 출
	for(row=0; row<2; row++)
	{
		for(col=0; col<3; col++)
		{
			printf("a[%d][%d] = %d\t", row, col, a[row][col]);
		}
		printf("\n");
	}



	return 0;
}
