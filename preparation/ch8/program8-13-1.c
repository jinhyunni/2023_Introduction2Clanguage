#include <stdio.h>

void prt_larger(int [], int, int);

int main()
{
	int arr[] = {10, 20, 30, 40, 50};
	int n1, n2;

	printf("배열에서 비교할 원소의 인덱스를 호출하세요(0~4): \n");

	printf("first num: ");
	scanf("%d", &n1);
	printf("second num: ");
	scanf("%d", &n2);
	
	printf("\n");
	prt_larger(arr, n1, n2);

}

void prt_larger(int arr[], int i1, int i2)
{
	if(arr[i1] > arr[i2])
		printf("arr[%d]=%d, arr[%d]=%d/ arr[%d] has larger value", i1, arr[i1], i2, arr[i2], i1);

	else
		printf("arr[%d]=%d, arr[%d]=%d/ arr[%d] has larger value", i1, arr[i1], i2, arr[i2], i2);


}
