#include <stdio.h>

void print_num_ptr(int (*p)[], int);
void print_num_arr(int *p, int);

int main()
{

	int n=3, m=5;	
	int num[][5] = {
		
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}

	};

	int (*pa)[5] = num;
	
	//print_num_ptr(num, m);	//배열명 -> 첫번째 '원소'의 주소. 첫번째 원소 -> 크기가 5인 정수형 배열! 그렇다면...num+1 -> 두번째 원소?;
//
	//									//num의 0번째 원소: {1, 2, 3} -> 정수형 배열
	//									//p++ -> 상대적인 메모리의 이동! 즉 다음 원소(행)을 가리키게 된다!
//
	//print_num_arr(&num[0][0], m);	//배열의 첫 시작원소의 주소를 넘겨줌


	//다양한 출력 값을 확인하기
	printf("pa = %p\n", pa);
	printf("pa +1 = %p\n", pa+1);
	printf("num+1 = %p\n", num+1);
	printf("*(pa+1) = %d\n", *(pa+1));
	printf("*(pa+1)+2=%p\n", *(pa+1)+2);
	printf("*(*(pa+1)_2)=%d\n", *(*(pa+1)+2));

	return 0;
}


//넘겨받은 배열의 2번째 배열을 출력하는 함수

//
void print_num_ptr(int (*p)[5], int m)
{
	int i;

	for(i=0; i<m; i++)
		printf("%d ", *(*(p+1)+i));
		/*
			p -> 2차원 배열의 첫번째 원소의 주소를 담고있다.
			p+1 -> 2차원 배열의 두번째 원소의 주소를 담고있다.
			*(p+1) -> 2차원 배열의 두번째 원소의 주소를 참조 -> 배열의 첫 원소의 주소!
			*(p+1)+2 -> 2차원 배열의 두번째 원소의 주소를 참조 -> 배열의 첫 원소의 주소! -> 배열의 3번째 원소의 주소
			*(*(p+1)+2) -> 2차원 배열의 두번째 원소에 저장된 배열의 세번쩨 원소의 주소를 참조한 값!
		*/
	

	printf("\n");
}



//말 그대로 메모리를 1차원적으로 탐색
void print_num_arr(int *p, int m)	//가인수의 입장에서는 정수형 변수를 담고있는 변수, 즉 정수형 포인터!
{	
	int i;

	for(i=5; i<10; i++)
		printf("*(p+%d) = %d\n", i, *(p+i));	

}
