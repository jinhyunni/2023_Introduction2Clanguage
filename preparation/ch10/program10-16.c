#include <stdio.h>
#include <string.h>	//strcmp(a, b) -> a가 b보다 우선: -1
					//strcpy(a,b) -> b의 문자열의 내용을 a에 복사 

#define N 5

//5명의 금메달리스트 이름을 char형 포인터 배열에 저장 후, 
//가나다 순으로 정렬하기!

int main()
{
	char *name[] = {"한빛", "성춘향", "이몽룡", "사공민국", "황해"};
	char *temp;		//주소를 교환하는 개념으로!
	int i, j, size;
	
 //	//name 배열에 있는 원소의 개수를 구하는 방법
 //	size = sizeof(name)/sizeof(name[0]);
 //
 //	printf("%d", size);



	//bubble sort!
	for(i=0; i<N-1; i++)		//(원소수-1)개의 정렬!
	{
		for(j=0; j<N-1-i; j++)
		{
			if(strcmp(name[j], name[j+1])>0)		//문자열의 주소를 넘겨주기! -> 포인터 배열의 원소 넘겨주기!
			{
				//주소의 교환!

				temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp;

				/*
				
				char temp[15];	//temp가 포인터가 아니라 배열이라면?

				strcpy(temp, *(name[i]));
				strcpy(*(name[i], *(name[i+1]));
				strcpy(*(name[i+1]), temp)

				   */

				/*
				첫번째 교환: (원소수-1)번의 교환
				두번째 교환: (원소수-2)번의 교환
				세번째 교환: (원소수-3)번의 교환...
				   */
			}
		}	
	}
	

	printf("정렬한 리스틔: ");
	for(i=0; i<N; i++)
			printf("%s ", name[i]);

}
