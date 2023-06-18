#include <stdio.h>

typedef struct person{
	
		char name[7];
		char gender;	
		int age;
} PERSON;


int main()
{
	int i;

	PERSON h1 = {"Jack", 'M', 24};
	PERSON h2 = {"Poly", 'F', 28};
	PERSON h3 = {"Mike", 'M', 22};

	PERSON group[3]={h1, h2, h3};	//구조체 배열: 각 원소가 구조체 변수!
	PERSON oldest;
	
	oldest = group[0];

	for(i=0; i<3; i++)
	{
		if(group[i+1].age > group[i].age)
				oldest = group[i+1];
	}

	printf("Oldest: %s\n", oldest.name);
	printf("Gender: %c\n", oldest.gender);
	printf("Age: %d\n", oldest.age);
	
}
