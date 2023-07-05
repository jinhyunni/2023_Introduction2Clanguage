#include <stdio.h>

struct student{

	char name[10];
	int math;
	int eng;
	int his;

};

void input_info(struct student *, int);
void output_info(struct student *, int);

int main()
{
	int i, sum=0;	
	struct student grp[3];

	input_info(grp, 3);
	output_info(grp, 3);
	
	printf("\n===Average math score===\n");

	for(i=0; i<3; i++)
	{
		sum += grp[i].math;
	}
	printf("%.1lf", (double)sum/3);


	printf("\n===Average English score===\n");
	sum=0;
	for(i=0; i<3; i++)
	{
		sum += grp[i].eng;
	}
	printf("%.1lf", (double)sum/3);


	printf("\n===Average History score===\n");
	sum=0;
	for(i=0; i<3; i++)
	{
		sum += grp[i].his;
	}
	printf("%.1lf", (double)sum/3);


	return 0;
}

void input_info(struct student *s, int n)
{
	
	int i;

	for(i=0; i<n; i++)
	{
		printf("\nInput studnet %d info\n", i+1);

		printf("Name: ");
		scanf("%s", s->name);

		printf("Math score: ");
		scanf("%d", &s->math);

		printf("English score: ");
		scanf("%d", &s->eng);

		printf("History score: ");
		scanf("%d", &s->his);

		s++;
		
	}
	
}

void output_info(struct student *s, int n)
{
	int i;

	for(i=0; i<n; i++)
	{
		printf("\n=====%s's information=====\n\n", s->name);

		printf("Math score: %d\n", s->math);
		printf("English score: %d\n", s->eng);
		printf("History score: %d\n", s->his);
	
		s++;
	}
}


