//c language
/*#1) All In One C Programs (mixture of any of concepts of C)> */
/*06) To shows the details of any student including marks, name, roll, pass, fail, distiction, percentage, stream etc as per need */
//98
/*Q. Accept stream, roll, name, subjects, marks from user and give result with marks,
         pass, fail, percentage, total marks etc as per user need (by roll or by name)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void stream_details(char ch);
int main()
{
	char stream[20], restart = '0';
again:
	clrscr();
	printf("Hlo sir. \nwhich stream do you want to prefer science, commerse or art:  ");
	scanf(" %s", stream);
	if (stream[0] == 's' || stream[0] == 'S')
		stream_details('s');
	else if (stream[0] == 'a' || stream[0] == 'A')
		stream_details('a');
	else if (stream[0] == 'c' || stream[0] == 'C')
		stream_details('c');
	else
	{
		printf("\nPlease select correct stream. Try again from begening\n");
		goto again;
	}
	printf("\nThanking You again. \nDo you want to restart the program. yes or no: ");
	scanf(" %c", &restart);
	if (restart == 'y' || restart == 'Y')
		goto again;
	else
	{
		printf("\n\nThanking You. Bye, SEE YOU");
		EXIT_SUCCESS; /*we can also use exit(0) or return 0 in case of int returning function. These are included in file stdlib.h*/
	}
	return 0;
}

void stream_details(char ch)
{
	char name_stream[15] = {0};

	if (ch == 's')
		strcpy(name_stream, "Science");
	else if (ch == 'c')
		strcpy(name_stream, "Commerse");
	else if (ch == 'a')
		strcpy(name_stream, "Art");
	int size, i, j;
	printf("write the total number of students in %s stream: ", name_stream);
	scanf("%d", &size);
	int roll[size], numsub[size]; /* In case of marks 1st is for name and roll of student, 2nd for name of subject and 3rd for marks in that subject*/
	int marks[size][20];
	int total_marks[size];
	char name[size][100], subject[size][10][50]; /*subject is string so 2 dinension required in every iteration. so it becomes 3 dimensional*/
	float percentage[size];

	for (i = 0; i < size; i++) //one value of i for data of one student
	{
		total_marks[i] = 0; //need further
		printf("\n\nWrite Details of New Student.");
		printf("\nwrite the roll number: ");
		scanf("%d", &roll[i]);
		getchar();
		printf("\nwrite the name of student: ");
		fgets(name[i], 100, stdin);
		printf("\nHow many subjects taken by %s: ", name[i]);
		scanf("%d", &numsub[i]);
		for (j = 0; j < numsub[i]; j++)
		{
			printf("\nwrite the name of subject %d: ", j + 1);
			scanf(" %[^\n]", subject[i][j]);
		marks_again: /* get used if user write wrong marks of any subject*/
			printf("\nMarks obtained in %s is: ", subject[i][j]);
			scanf("%d", &marks[i][j]);
			if (marks[i][j] > 100 || marks[i][j] < 0)
			{
				printf("\nYou have written wrong marks. Please write correct.");
				marks[i][j] = 0;
				goto marks_again;
			}
			total_marks[i] = total_marks[i] + marks[i][j];
		}
		percentage[i] = (total_marks[i] / numsub[i]);
	}
	char choice[10];
	char name_details[50];
	int tocheck_pass, by_roll;
	char check_by_which[10];

	printf("\n\nDo you want to know details of any student. yes or no: ");
	scanf(" %s", choice);
	if (choice[0] == 'y' || choice[0] == 'Y')
	{
	again1: /*when user want to check the details another student*/
		clrscr();
		printf("\nDo you want to check by name or roll: ");
		scanf(" %s", check_by_which);
		if (check_by_which[0] == 'n' || check_by_which[0] == 'N')
		{
			getchar();
			printf("\nwrite the name of student: ");
			fgets(name_details, 50, stdin);
		}
		else
		{
			printf("\nwrite the roll of student: ");
			scanf("%d", &by_roll);
			getchar(); /*I have used it because scanf() left new line every time.*/
		}
		for (i = 0; i < size; i++)
		{
			if (strcmp(name_details, name[i]) == 0 || by_roll == roll[i])
			{
				printf("\nName- %s", name[i]);
				printf("\nRoll- %d", roll[i]);
				printf("\nStream- %s", name_stream);
				printf("\nNumber of subjects taken is %d", numsub[i]);
				tocheck_pass = 0;
				for (j = 0; j < numsub[i]; j++)
				{
					printf("\n%d. Marks obtained in %s is %d", j + 1, subject[i][j], marks[i][j]);
					if (marks[i][j] > 29)
					{
						tocheck_pass = tocheck_pass + 1;
						if (marks[i][j] > 74)
							printf("\n**PASS. Achieved DISTINCTION in %s", subject[i][j]);
						else
							printf("\n*PASS in %s", subject[i][j]);
					}
					else
						printf("\n*FAIL In %s by %d marks", subject[i][j], 30 - marks[i][j]);
				}
				if (tocheck_pass == numsub[i])
				{
					printf("\n%s is passed with aggregeat marks of %d", name[i], total_marks[i]);
					printf("\n*Percentage=%f%%", percentage[i]);
				}
				else
					printf("\n%s is FAIL", name[i]);
			}
		}
		char choice1[10];
		printf("\nDo you want to check details of another student. yes or no: ");
		scanf(" %s", choice1);
		if (choice1[0] == 'y' || choice1[0] == 'Y')
			goto again1;
	}
	else /*This is the else of 1st if of this function. It will execute when user don't want to know the details of any student*/
		printf("\nThanking You");
}
/*
jo particular hoga wo one dimensional hoga. Jo har roll or student ke sath vary 
karta hai. usmein ek se adhik dimension hoga. e.g. har student ka subjects alag
honge aur har subjects ka marks bhi alag alag hoga.
o*/
/*
author- suraj kumar gir
date- 22nd may 2021
purpose- To make the above question totally customisable as per the need of user.
*/