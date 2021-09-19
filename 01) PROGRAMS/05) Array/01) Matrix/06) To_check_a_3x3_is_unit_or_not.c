//c language
/*1) Programs> 5) Array> 4) Matrix
/*6) To check that the entered 3x3 matrix is unit matrix or not using concept of array*/
//49
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3], i, j;
	char c;
	clrscr();
	do
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("\nwrite the element of a[%d][%d] :  ", i, j);
				scanf("%d", &a[i][j]);
			}
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf(" %d ", a[i][j]);
			}
			printf("\n");
		}
		if (a[0][0] == 1 && a[0][1] == 0 && a[0][2] == 0 && a[1][0] == 0 && a[1][1] == 1 && a[1][2] == 0 && a[2][0] == 0 && a[2][1] == 0 && a[2][2] == 1)
			printf("\nGiven Matrix is a unit matrix");
		else
			printf("\nGiven Matrix is not a unit matrix");

		printf("\nDo you want to continue: y/n: ");
		scanf(" %c", &c);
	} while (c == 'y');
	if (c != 'y' && c != 'n')
		printf("\nwrong choice selected. Please select correct one");
	if (c != 'y')
		printf("\n\nTHANKING YOU");

	return 0;
	getch();
}