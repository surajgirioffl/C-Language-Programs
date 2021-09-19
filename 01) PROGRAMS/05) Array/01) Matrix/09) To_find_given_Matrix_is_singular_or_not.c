//c language
/*1) Programs> 5) Array> 4) Matrix
/*9) To check that entered matrix is singular or not using concept of array*/
//52
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3], i, j;
	clrscr();
	printf("\nFor 3x3 Matrix");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nwrite the element a[%d][%d] of Respective Matrix: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\nEntered Matrix is:  \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}

	//now determinant part of given matrix
	i = 0;
	i = (a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))) - (a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]))) + (a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])));
	printf("\n\nDeterminant of Given Matrix is %d", i);

	if (i == 0)
		printf("\nGiven Matrix is a singular Matrix");
	else
		printf("\nGiven Matrix is a Non-singular Matrix");

	return 0;
	getch();
}