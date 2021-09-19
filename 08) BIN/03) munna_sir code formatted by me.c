#include <stdio.h>
#include <conio.h>
struct student
{
	int roll;
	int mark[3];
	char name[10];
	char subname[3][20];
};
int main()
{
	struct student s1[2];
	int i, j, k, l, sum, m = 0;
	float per = 0;
	clrscr();
	printf("Enter the details of the students\n\n");
	for (i = 0; i < 2; i++)
	{
		printf("Enter name of student %d:\n", i + 1);
		scanf("%s", s1[i].name);
		printf("Enter roll of %s:\n", s1[i].name);
		scanf("%d", &s1[i].roll);
		printf("\n");

		k = 1; //for counting of subject number
		for (l = 0; l < 3; l++)
		{
			printf("Enter name of subject %d of %s:\n", k++, s1[i].name);
			scanf("%s", s1[i].subname[l]);

			printf("enter marks of %s:\n", s1[i].subname[l]);
			scanf("%d", &s1[i].mark[l]);
		}
		printf("\n");
	}

	printf("\n=======DETAILS OF ALL STUDENTS=======\n");
	for (i = 0; i < 2; i++)
	{
		printf("\n===DETAILS OF STUDENT %d====\n", i + 1);
		printf("Name ~ %s\n", s1[i].name);
		printf("Roll ~ %d\n", s1[i].roll);
		printf("Details of Marks obtained by %s are following:\n", s1[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("%d. Marks obtained in %s=%d\n", j + 1, s1[i].subname[j], s1[i].mark[j]);
			if (s1[i].mark[j] < 30)
				printf("Fail in %s by %d marks\n\n", s1[i].subname[j], 30 - s1[i].mark[j]);
		}
		printf("\nOverall Result of %s is following:\n", s1[i].name);
		sum = 0;
		for (l = 0; l < 3; l++)
		{
			if (s1[i].mark[l] >= 30)
			{
				sum = sum + s1[i].mark[l];
				m++;
			}
		}
		if (m == 3)
		{
			per = sum / 3;
			printf("PASS with Total Marks ~ %d \t Percentage ~ %5.2f%%\n", sum, per);
			if (per >= 70)
				printf("1st devision with %5.2f%% marks\n", per);
			else if (per >= 55 && per < 70)
				printf("2nd devision with %5.2f%% marks\n", per);
			else if (per >= 30 && per < 55)
				printf("3rd devision with %5.2f%% marks\n", per);
		}
		else
			printf("FAIL");
	}
	getch();
	return 0;
}