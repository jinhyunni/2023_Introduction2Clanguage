# include <stdio.h>

int main()
{
	int i, sum = 0;

	i = 1;
	while(sum < 1000){
		sum += i++;

		//sum += i;
		//i++;
	}
	
	printf("1~%d 까지의 합: %d\n", i-1, sum);	//종료시 i의 값을 1만큼 증가시켜서 반환됨

	return 0;
}
