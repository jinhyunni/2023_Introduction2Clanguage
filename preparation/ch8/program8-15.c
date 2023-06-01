#include <stdio.h>
#define N 4

void print_array(int arr[]);
void percentage(int arr[]);

int main()
{

	int count[N] = {42, 37, 83, 33};	//각 연에인의 인기도 조사 결과

	printf("득표현황:");
	print_array(count);		//배열 전체를 함수에 넘길때: 배열 명을 적어준다
	printf("\n");

	//배열에 저장된 득표수를 백분율로 바꾸어 출력
	printf("백분율: ");
	percentage(count);	//배열명은 배열의 첫번째 원소의 주소를 의미한다. 따라서 pass by reference!
	print_array(count);	//따라서 main함수의 실제 데이터의 값이 바뀐다.

	return 0;
}

void print_array(int arr[])
{
	int i;

	for(i=0; i<N; i++)
		printf("%3d", arr[i]);
}

void percentage(int arr[])
{
	int count;	//전체 인원수를 저장할 변수
	int i;	//반복문을 위한 변수

	for(i=0; i<N; i++)
		count += arr[i];

	for(i=0; i<N; i++)
	{
		arr[i]= (int)((double)arr[i]/count*100);

	}

}
