//c language
/*1) Programs> 5) Array> 4) Matrix
/*3) To find subtraction of two 2x3 matrices on console after taking input from user using concept of array*/
//46
// To store two matrices of 2x3 and find its substraction
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[2][3], i, j, b[2][3];
	clrscr();

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nwrite the element of 1st matrix a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nwrite the element of 2nd matrix a[%d][%d]= ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nRequired substraction is :  \n");
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("  %d  ", a[i][j] - b[i][j]);
		}
	}

	return 0;
	getch();
}