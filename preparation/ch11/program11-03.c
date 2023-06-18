#include <stdio.h>

#define N 10

struct person{

		char name[10];
		char gend;
		int age;
};

int main()
{
	int i, sumA=0, numM=0, numF=0;
	double avg;
	struct person group[10] = { {"나태희", 'F', 20},
								{"유현빈", 'M', 29},
								{"나원빈", 'M', 25},
								{"문건영", 'F', 22},
								{"소지법", 'M', 25},
								{"나보배", 'F', 29},
								{"장도건", 'M', 32},
								{"고수영", 'F', 29},
								{"이나라", 'F', 31},
								{"김해수", 'F', 35},
	};// 구조체 배열 선언

	//나이의 총합, 남자의 수, 여자의 수 구하기
	for(i=0; i<N; i++)
	{
		sumA += group[i].age;
		if(group[i].gend == 'M')
				numM++;
		else
				numF++;
	}
	
	//평균 나이 구하기
	avg = (double)sumA/N;

	printf("====Information====\n\n");
	printf("name/	gender/	age\n");
	
	for(i=0; i<N; i++)
		printf("%s,   %c,   %d\n", group[i].name, group[i].gend, group[i].age);
	
	printf("\n=================\n");
	printf("Number of male: %d\n", numM);
	printf("Number of female: %d\n", numF);
	printf("Average age: %.1lf\n", avg);



}
