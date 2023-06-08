#include <stdio.h>
#include <string.h>		//strcmp 사용

#define N 5

int main()
{
	//은매달리스트의 이름
	char silver[N][10] = {"나태희", "유빈", "나원빈", "문건영", "소지법"};
	char temp[10];

	int i, j, count;
	
	printf("정렬 전 배열: ");
	for(i=0; i<N; i++)
			printf("%s ", silver[i]);	//각 행의 첫 시작원소의 주소표현: silver[0]

	printf("\n");
	printf("%d\n", strcmp(silver[0], silver[1]));

	//sort
	for(i=0; i<N-1; i++)
	{
		for(j=0; j < N; j++)
		{
			if(strcmp(silver[j], silver[j+1])== 1)	// j+1이 j보다 앞설때
			{
 //				temp = silver[j];
 //				silver[j] = silver[j+1];
 //				silver[j+1] = silver[j];
 //				문자열의 복사 및 입력 -> strcpy 함수의 사용!

				strcpy(temp, silver[j]);
				strcpy(silver[j], silver[j+1]);
				strcpy(silver[j+1], temp);

			}
		}
	}

	printf("\n\n정렬 후  배열: ");
	for(i=0; i<N; i++)
			printf("%s ", silver[i]);	//각 행의 첫 시작원소의 주소표현: silver[0]


}

