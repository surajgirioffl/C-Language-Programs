//c language
/*1) Programs> 5) Array> 4) Matrix
/*10) To find the Inverse of entered matrix (determinant, cofactors, matrix B, adjoint A and Inverse of matrix) using concept of array*/
//53
//inverse of given Matrix
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3], i, j, b[3][3], k;
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
	k = 0;
	k = (a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))) - (a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]))) + (a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1])));
	printf("\n\nDeterminant of Given Matrix is %d", k);
	if (k == 0)
		printf("\nGiven matrix is singular. So, it's inverse does'nt exist.");
	else
	{
		printf("\nGiven Matrix is Non-singular. So, it's inverse exist");
		printf("\nThe cofactors of elements of 1st row are:  ");
		b[0][0] = ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]));
		b[0][1] = -((a[1][0] * a[2][2]) - (a[2][0] * a[1][2]));
		b[0][2] = ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
		i = 0;
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", b[i][j]);
		}

		printf("\nThe cofactors of elements of 2nd row are:  ");
		b[1][0] = -((a[0][1] * a[2][2]) - (a[0][2] * a[2][1]));
		b[1][1] = ((a[0][0] * a[2][2]) - (a[2][0] * a[0][2]));
		b[1][2] = -((a[0][0] * a[2][1]) - (a[2][0] * a[0][1]));
		i = 1;
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", b[i][j]);
		}

		printf("\nThe cofactors of elements of 3rd row are:  ");
		b[2][0] = ((a[0][1] * a[1][2]) - (a[0][2] * a[1][1]));
		b[2][1] = -((a[0][0] * a[1][2]) - (a[1][0] * a[0][2]));
		b[2][2] = ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
		i = 2;
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", b[i][j]);
		}

		//To show matrix b
		printf("\nHence, Matrix B whose elments are cofactor of |A| is  \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf(" %d ", b[i][j]);
			}
			printf("\n");
		}

		printf("\n\nwe know that adjoint of A is equal to Transpose of Matrix B");
		printf("\nHence, Adjoint A is:  \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf(" %d ", b[j][i]);
			}
			printf("\n");
		}

		printf("\nwe know that inverse of a=1/|A|x adj A");
		printf("\nHence, Inverse of Given Matrix is:  \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf(" %d/%d ", b[j][i], k);
			}
			printf("\n");
		}
	}
	return 0;
	getch();
}