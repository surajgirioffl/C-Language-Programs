//c language
/*1) Programs> 5) Array> 4) Matrix
/*7) Multiplication of two matrices entered by user using concept of array*/
//50
//For multiplication of two matrices

#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10][10], i, j, n, m, b[10][10], p, q, suraj, suraj1, suraj2, k;
	char suraj3;
	printf("Sorry It's working only for 3x3 Matrix now\n");
	do
	{
		printf("\nFor 1st Matrix");
		printf("\nwrite the number of rows:  ");
		scanf("%d", &n);
		printf("\nwrite the number of columns:  ");
		scanf("%d", &m);
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf("\nwrite the element of a[%d][%d] of 1st matrix  ", i, j);
				scanf("%d", &a[i][j]);
			}
		}

		printf("\nFor 2nd Matrix");
		printf("\nwrite the number of rows: ");
		scanf("%d", &p);
		printf("\nwrite the number of columns: ");
		scanf("%d", &q);
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("\nwrite the element of b[%d][%d] of 2nd matrix   ", i, j);
				scanf("%d", &b[i][j]);
			}
		}
		printf("\n\nFor 1st Matrix:  \n");
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				printf(" %d ", a[i][j]);
			}
			printf("\n");
		}

		printf("\n\n2nd Matrix is :  \n");
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf(" %d ", b[i][j]);
			}
			printf("\n");
		}
		//Multiplication part
		printf("\n\nMultiplication of both given matrices are:  \n");
		for (i = 0; i < n; i++)
		{
			suraj = 0;
			suraj1 = 0;
			suraj2 = 0;
			for (j = 0; j < q; j++)
			{
				suraj = suraj + a[i][j] * b[j][0];
				if (j == 1)
				{
					for (k = 0; k < q; k++)
						suraj1 = suraj1 + a[i][k] * b[k][j];
				}
				if (j == 2)
				{
					for (k = 0; k < q; k++)
						suraj2 = suraj2 + a[i][k] * b[k][j];
				}
			}

			printf(" %d  %d  %d  ", suraj, suraj1, suraj2);
			printf("\n");
		}
		printf("\n\nDo you want to continue y/n:  ");
		scanf(" %c", &suraj3);
	} while (suraj3 == 'y');
	if (suraj3 == 'n')
		printf("\nTHANKING YOU");
	if (suraj3 != 'y' && suraj3 != 'n')
		printf("\nwrong choise selected. please selct correct one");

	return 0;
	getch();
}
