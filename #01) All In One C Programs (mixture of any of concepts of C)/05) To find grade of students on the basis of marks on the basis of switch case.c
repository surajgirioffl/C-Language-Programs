//c language
//*#1) All In One C Programs (mixture of any of concepts of C)>*/
/*5) To find grade of students on the basis of marks using switch case */
//91

/*Q. Write a program to find grade of a student given his marks based on below
90-100 A
80-90 B
70-80 C
60- 70 D
Less than 60 E*/

#include <stdio.h>
int main()
{
	int marks, n;
	printf("\nwrite your marks: ");
	scanf("%d", &marks);
	if (marks > 90)
		n = 1;
	else if (marks <= 90 && marks > 80)
		n = 2;
	else if (marks <= 80 && marks > 70)
		n = 3;
	else if (marks <= 70 && marks > 60)
		n = 4;
	else
		n = 5;
	switch (n)
	{
	case 1:
		printf("\nGrade A");
		break;
	case 2:
		printf("\nGrade B");
		break;
	case 3:
		printf("\nGrade C");
		break;
	case 4:
		printf("\nGrade D");
		break;
	case 5:
		printf("\nGrade E");
		break;
	}
	return 0;
}