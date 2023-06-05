#include <stdio.h>

int main()
{
	int score;
	char grade;

	printf("Enter student's score: ");
	scanf("%d", &score);
	

	//형 변환을 이용하여 범위에 따른 숫자를 부여한것임!
	switch((int)(score/10))
	{

		case 10:
		case 9:
			grade = 'A';
			break;

		case 8:
			grade = 'B';
			break;

		case 7:
			grade = 'C';
			break;
			
		case 6:
			grade = 'D';
			break;

		default:
			grade = 'F';
			break;

	}
	
	printf("Student's Score: %d\n", score);
	printf("Student's Grade: %c\n", grade);


	return 0;
}
