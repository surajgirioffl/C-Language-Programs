//c language
/*5) Online> 1) Shape Based Programs*/
/*1) Pyramid shape making program of star(*)*/
//80
#include <stdio.h>
#include <conio.h>
int main()
{
	int row, n, i, z = -1, k, r;
	clrscr();
	printf("\nwrite number of rows you want:   ");
	scanf("%d", &row);
	r = row;
	for (i = 0; i < row; i++)
	{
		r = r - 1;
		for (n = 0; n < r; n++)
		{
			printf("  ");
		}
		z = z + 2;
		for (k = 0; k < z; k++)
			printf(" *");
		printf("\n");
	}
}
