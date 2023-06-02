#include <stdio.h>
#define N 5
#define NN 5

//주소를 16진수로 표현하는 변환명세: %p
//어떤 표현이 진짜 주소 표현인가?
//scanf("변환명세", 주소); 임을 이용해서 알아보

int main()
{
	char name[N][NN];

	int i, j;
		
	//이차원 배열의 주소표현
	//각 행에 이름 입력하기

	//&name[i][0]
	for(i=0; i<N; i++)
	{
		printf("Enter name of 4 characters: ");
		scanf("%s", &name[i][0]);

	}

	for(i=0; i<N; i++)
	{
		printf("name[%d] is %s\n", i, name[i]);
	}

	printf("\n\n");

	//name[i]

	for(i=0; i<N; i++)
	{
		printf("Enter name of 4 characters: ");
		scanf("%s", name[i]);

	}

	for(i=0; i<N; i++)
	{
		printf("name[%d] is %s\n", i, name[i]);
	}

	printf("\n\n");

	//name
	
	for(i=0; i<N; i++)
	{
		printf("Enter name of 4 characters: ");
		scanf("%s", name+i);

	}

	for(i=0; i<N; i++)
	{
		printf("name[%d] is %s\n", i, name[i]);
	}

	printf("\n\n");


 //	for(i=0; i<N; i++)
 //	{
 //		printf("address of each row: %p\n", name[i]);
 //	}
 //
 //	printf("\n\n");
 //
 //
 //	//이차원 배열의 값 표
 //	for(i=0; i<N; i++)
 //	{
 //		printf("name[%d]= %p\n", i, name[i]);
 //	}

 //	printf("\n\n");
 //
 //	for(i=0; i<N; i++)
 //	{
 //		for(j=0; j<10; j++)
 //		printf("name[%d][%d]=%c\n", i, j, name[i][j]);
 //	}
	
}	
