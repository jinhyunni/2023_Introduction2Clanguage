#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	char grade;

	printf("Enter student's grade: ");
	scanf("%d", &score);

	if(score >= 90)
	{
		grade = 'A';
		printf("Student's score: %d, Student's Grade: %c", score, grade);
	}

	else if(score >= 80)
	{
		grade = 'B';
		printf("Student's score: %d, Student's Grade: %c", score, grade);
	}

	else if(score >= 70)
	{
		grade = 'C';
		printf("Student's score: %d, Student's Grade: %c", score, grade);
	}

	else if(score >= 60)
	{
		grade = 'D';
		printf("Student's score: %d, Student's Grade: %c", score, grade);
	}

	else
		printf("Invalid score input! Try again!");
		exit(0);


	return 0;
}
