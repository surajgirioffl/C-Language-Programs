//c language
/*1) Programs> 5) Array> 4) Matrix
/*1) To display 2x3 matrix on console after taking input from user using concept of array*/
//44
/*To store a matrix of 2x3 dimesion and display the matrix on console*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[2][3], i, j; //i for row and j for column

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nwrite element of a(%d,%d) ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%d  ", a[i][j]);
		}
	}

	return 0;
	getch();
}