//c language
/*1) Programs> 5) Array> 4) Matrix
/*5) To find transpose of given 3x3 matrix after taking input from user using concept of array*/
//48
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3], i, j;
	clrscr();
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

	return 0;
	getch();
}