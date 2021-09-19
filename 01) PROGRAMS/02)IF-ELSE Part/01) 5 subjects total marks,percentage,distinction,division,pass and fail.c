//c language
//1) Program> 2)if-else part> 1) mark sheet
/*1)To find total marks, percentage, destinction, division, pass and fail on basis of marks of 5 subjects entered by user*/
//17
#include <stdio.h>
#include <conio.h>
int main()
{
	float p, c, m, e, h, ttl, per;
	char ch;
	clrscr();
	do
	{
		printf("\nwrite marks obtained in physics: ");
		scanf("%f", &p);

		printf("\nwrite marks obtained in chemistry: ");
		scanf("%f", &c);

		printf("\nwrite marks obtained in mathematics: ");
		scanf("%f", &m);

		printf("\nwrite marks obtained in english: ");
		scanf("%f", &e);

		printf("\nwrite marks obtained in hindi:\n ");
		scanf("%f", &h);

		//user has input the marks of al 5 subjects till here. Now conditional part will start.

		ttl = p + c + m + e + h;
		per = ttl / 5;

		if (p > 29)
		{
			if (p > 74)
			{
				printf("\nDISTINCTION IN PHYSICS");
			}
			else
			{
			}
		}
		else
		{
			printf("failed in Pysics by %f marks", 30 - p);
		}

		if (c > 29)
		{
			if (c > 74)
			{
				printf("\nDISTINCTION IN CHEMISTRY");
			}
			else
			{
			}
		}

		else
		{
			printf("\nfailed in chemistry by %f marks ", 30 - c);
		}

		if (m > 29)
		{
			if (m > 74)
			{
				printf("\nDISTINCTION MATHEMATICS");
			}
			else
			{
			}
		}

		else
		{
			printf("\nfalid in mathematics by %f marks ", 30 - m);
		}

		if (e > 29)
		{
			if (e > 74)
			{
				printf("\nDISTINCTION IN ENGLISH");
			}
			else
			{
			}
		}
		else
		{
			printf("\nfailed in english by %f marks", 30 - e);
		}

		if (h > 29)
		{
			if (h > 74)
			{
				printf("\nDISTINCTION IN HINDI");
			}
			else
			{
			}
		}

		else
		{
			printf("\nfailed in hindi by %f marks", 30 - h);
		}

		printf("\nTotal marks obtained by candidate is %f", ttl);
		printf("\nPercentage is %f", per);

		//OVERALL RESULT
		if (p > 29 && c > 29 && m > 29 && e > 29 && h > 29)
		{
			printf("\nOVERALL RESULT IS SHOWN BELOW");
			printf("\n Pass with %f marks", ttl);
		}
		else
		{
			printf("\nOVERALL RESULT IS SHOWN BELOW");
			printf("\nFAIL😭");
		}

		if (p > 29 && c > 29 && m > 29 && e > 29 && h > 29 && ttl > 299)
		{
			printf("\n FIRST DIVISION WITH TOTAL MARKS OF %f", ttl);
		}
		else
		{
		}

		if (p > 29 && c > 29 && m > 29 && e > 29 && h > 29 && ttl < 300 && ttl > 249)
		{
			printf("\n SECOND DIVISION WITH TOTAL MARKS OF %f", ttl);
		}
		else
		{
		}

		if (p > 29 && c > 29 && m > 29 && e > 29 && h > 29 && ttl > 149 && ttl < 250)
		{
			printf("\n FIRST DIVISION WITH TOTAL MARKS OF %f", ttl);
		}
		else
		{
		}

		printf("\n\nDo you want to continue.If yes then press y or n:  ");
		scanf(" %c", &ch);
	} while (ch == 'y');

	if (ch == 'n')
	{
		printf("\nThanking You");
		printf("\n*****************THIS PROGRAM IS MADE BY MR. SURAJ KUMAR GIRI********************");
	}
	if (ch != 'n' && ch != 'y')
		printf("\nwrong choice selected. please select correct one");
	return 0;
	getch();
}