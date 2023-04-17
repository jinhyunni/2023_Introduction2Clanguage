#include <stdio.h>

int main()
{
	int num1, num2;
	int sum;
	double avg;
	char grade;

	printf("First number: \n");
	scanf("%d", &num1);

	printf("Second number: \n");
	scanf("%d", &num2);

	sum = num1 + num2;
	avg = sum/2.0;

 //	//grading by using 'if' statement
 //	if(avg >= 90)
 //			grade = 'A';
 //	else if(avg >= 80)
 //			grade = 'B';
 //	else if(avg >= 70)
 //			grade = 'C';
 //	else
 //			grade = 'D';
 //
 //	//printing out
 //	printf("Total score: %d\n", sum);
 //	printf("Average: %lf\n", avg);
 //	printf("Grade: %c\n", grade);

	switch((int)avg/10){
		case 10:
		case 9:
			grade = 'A'; break;
		case 8:
			grade = 'B'; break;
		case 7:
			grade = 'C'; break;
		case 6:
			grade = 'D'; break;
		default:
			grade = 'F'; break;
		}
	
	//printing out
	printf("Total score: %d\n", sum);
	printf("Average: %lf\n", avg);
	printf("Grade: %c\n", grade);


	return 0;
}	
