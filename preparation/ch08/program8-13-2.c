#include <stdio.h>

void prt_larger(int, int);	//함수의 입장에서는 배열을 받는 것이 아니라 값을 받는다!!


int main()
{
	int arr[] = {10, 20, 30, 40, 50};
	int i1, i2;

	printf("배열에서 원소의 크기를 비교할 원소의 인덱스를 입력하세요(0~4): ");
	scanf("%d%d", &i1, &i2);

	prt_larger(arr[i1], arr[i2]);	//pass by value
	
}

void prt_larger(int n1, int n2)
{
	if(n1 > n2)
		printf("%d is larger than %d", n1, n2);
	else
		printf("%d is larger than %d", n2, n1);
}
