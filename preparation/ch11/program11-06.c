#include <stdio.h>

#define N 5

typedef struct person PER;

struct person{
		
		char name[7];
		char id[7];
		int sal;
};

int main()
{
	int sumS=0, i;
	double avg;
	PER grp[N];
	
	//Input worker's information
	printf("Input worker's information\n");

	for(i=0; i<N; i++)
	{
		printf("worker %d: ", i+1);
		scanf("%s %s %d", grp[i].name, grp[i].id, &grp[i].sal);
	}

	//calculate average salary
	for(i=0; i<N; i++)
	{
		sumS += grp[i].sal;
	}
	
	avg = (double)sumS/N;

	//print out worker's information whose salary is above average

	printf("============\n");
	printf("Average salary: %.1lf\n", avg);
	printf("List of worker whose salary is above average:\n\n");
	printf("Name	id	salary\n\n");
	for(i=0; i<N; i++)
	{
		if(grp[i].sal > avg)
			printf("%s	%s	%d\n\n", grp[i].name, grp[i].id, grp[i].sal);
	}


	return 0;
}

