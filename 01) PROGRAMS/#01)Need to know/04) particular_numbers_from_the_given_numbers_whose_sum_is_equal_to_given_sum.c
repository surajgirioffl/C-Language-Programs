//c language
//1) Program> #1) Need to know
/*4) paticular numbers from the given numbers whose sum is equal to given sum by user*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, m, b[100], i, j, k, z, r;
	char c;
	clrscr();
	do
	{
		printf("\nwrite the numbers of number you want to enter:   ");
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			printf("\nwrite the numbers: ");
			scanf("%d", &b[i]);
		}
		printf("\nwrite the number that should be obtained by sum of any three of given numbers above:  ");
		scanf("%d", &m);
		printf("\nPossibility, when repeatation is allowed");
		r = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n; j++)
			{
				for (k = 2; k < n; k++)
				{
					z = b[i] + b[j] + b[k];
					if (z == m)
					{
						printf("\n%d, %d , %d are the required numbers to get sum equal to %d", b[i], b[j], b[k], m);
						r = r + 1;
					}
				}
			}
		}
		printf("\nTotal Number of Possibilities when repeatation is allowed = %d", r);
		r = 0;
		printf("\n\nPossibility, when repeatation is not allowed");
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n; j++)
			{
				for (k = 2; k < n; k++)
				{
					z = b[i] + b[j] + b[k];
					if (z == m && i != j && j != k && k != i)
					{
						printf("\n%d, %d , %d are the required numbers to get sum equal to %d", b[i], b[j], b[k], m);
						r = r + 1;
					}
				}
			}
		}
		printf("\nTotal Number of Possibilities when repeatation is not allowed = %d", r);

		printf("\n\nDo You Want to continue");
		printf("\nPress 'y' for Yes or 'n' for No:  ");
		scanf(" %c", &c);
	} while (c == 'y');
	if (c == 'n')
		printf("\nThanking You");
	else
		printf("\nwrong choice selected. Please Correct One");

	return 0;
	getch();
}
