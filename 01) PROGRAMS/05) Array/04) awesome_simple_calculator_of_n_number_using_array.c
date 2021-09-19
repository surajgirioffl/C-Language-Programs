//c language
/*1) Programs> 5) Array> 3)Calculator using array
/*1) Awesome simple calculator of n numbers(as per user input) using concept of array*/
//43
#include <stdio.h>
#include <conio.h>
int main()
{
	float a[100], s = 0;
	int n, i;
	char c, d;

	do
	{
		printf("\nselect the following as per your need.\n + - For sum \n - - For subtraction \n x - For Multiplication \n / - For division :   ");
		scanf(" %c", &c);
		switch (c)
		{
		case '+':
			//for summation
			printf("\nwrite the numbers of number you wnat to add:  ");
			scanf("%d", &n);
			for (i = 1; i <= n; i++)
			{
				printf("\nwrite the number:  ");
				scanf("%f", &a[i]);
				s = s + a[i];
			}
			printf("\nRequired sum of given numbers are %f", s);
			break;

		case '-':
			//for subtraction
			printf("\nwrite the numbers of number you wnat to subtract:  ");
			scanf("%d", &n);
			for (i = 1; i <= n; i++)
			{
				printf("\nwrite the number:  ");
				scanf("%f", &a[i]);
			}
			for (i = 2; i <= n; i++)
			{
				s = s - a[i];
			}
			printf("\nRequired subtraction of given numbers are %f", s + a[1]);
			break;

		case 'x':
			//for multiplication
			s = 1;
			printf("\nwrite the numbers of number you wnat to multiply:  ");
			scanf("%d", &n);
			for (i = 1; i <= n; i++)
			{
				printf("\nwrite the number:  ");
				scanf("%f", &a[i]);
				s = s * a[i];
			}
			printf("\nRequired multiplication of given numbers are %f", s);
			break;

		case '/':
			//for division
			for (i = 1; i <= 2; i++)
			{
				printf("\nwrite the number:  ");
				scanf("%f", &a[i]);
			}
			s = a[1] / a[2];
			printf("\nRequired sum of given numbers are %f", s);
			break;

		default:
			printf("\nwrong choice selected. Please select correct one");
		}

		printf("\n\nDo you want to continue. If yes then write y otherwise n. Select you choice y/n:    ");
		scanf(" %c", &d);

	} while (d == 'y');
	if (d == 'n')
		printf("\nThanking You. \n\nThis program is written by Suraj Kumar Giri");

	if (d != 'n' && d != 'y')
		printf("\nwrong choise selected. Please select correct one");
	return 0;
	getch();
}