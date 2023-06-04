#include <stdio.h>

int find_larger(int, int);

int main()
{

	int max, score[5]={10, 8, 9, 7, 8};
	
	max = find_larger(score[3], score[4]);	//리턴값이 존재하는 함수 호출
	
	printf("score[3]=%d, score[4]=%d, 둘 중 큰 원소: %d\n", score[3], score[4], max);

}

int find_larger(int n1, int n2)
{

	if(n1 > n2)
		return(n1);
	else
		return(n2);

}
