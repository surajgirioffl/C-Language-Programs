//c language
/*1) Programs> 5) Array> 4) Matrix
/*4) To find sum of diagonal of 3x3 matrix on console after taking input from user using concept of array*/
//47
/*To store a matrix of 3x3 and find the sum of elements of 1st diagonal and sum of elements of 2nd diagonal*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3], i, j;
	clrscr();
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nwrite the element of a[%d][%d]", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nGiven Matrix is :  \n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j]);
		}
	}
	printf("\nsum of its 1st diagonal is %d\n", a[0][0] + a[1][1] + a[2][2]);
	printf("\nsum of its 2nd diagonal is %d", a[0][2] + a[1][1] + a[2][0]);

	return 0;
	getch();
}