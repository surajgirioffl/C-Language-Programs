//c language
/*1) Programs> 3) Loop> 2) Any Loop> 5) shapes based programs*/
/*3) To print star(*) around hash(#) as row and column entered as input from user using loop*/
//37
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, n, m;
	clrscr();
	printf("\nwrite the number of elements in a row you want: ");
	scanf("%d", &n);
	printf("\nwrite the number of elements in a column you want : ");
	scanf("%d", &m);

	for (i = 0; i < n; i++)
	{
		printf(" * ");
	}
	printf("\n");
	for (j = 0; j < n - 2; j++)
	{
		for (i = 0; i < m; i++)
		{
			if (i == 0 || i == m - 1)
				printf(" * ");
			else
				printf(" # ");
		}
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		printf(" * ");
	}

	return 0;
	getch();
}