//c language
/*1) Programs> 5) Array> 4) Matrix
/*11) To find symmetric or skew symmetric matrix using concept of array*/
//54
//symmetric Matrix
/*A squre Matrix is said to symmetric matrix if its transpose is equal to the matrix means transpose of given matrix should be same as the matrix to be symmetric otherwise it will be skew symmetric.*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3], i, j, k;
	clrscr();
	printf("\nIt's for 3x3 Matrix");
	for (i = 0; i < 3; i++) //i for row and j for column
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nwrite the a[%d][%d] element matrix: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nGiven matrix is :  \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of given Matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", a[j][i]);
		}
		printf("\n");
	}
	k = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == a[j][i])
				k = k + 1;
		}
	}
	if (k == 9)
		printf("\nGiven Matrix is a symmetric Matrix");
	else
		printf("\nGiven Matrix is a skew symmetric Matrix");

	return 0;
	getch();
}