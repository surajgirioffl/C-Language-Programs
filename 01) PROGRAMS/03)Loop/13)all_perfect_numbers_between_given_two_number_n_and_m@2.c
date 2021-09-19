//c language
/*1) Programs> 3) Loop> 2) Any Loop> 3) Perfect Number*/
/*3) To display all perfect number between given two number method 2 using loop*/
//33
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, m, i, k, p = 0, z, y;
	clrscr();

	printf("\nwrite the number from which you want to check all perfect number:  ");
	scanf("%d", &n);

	printf("\nwrite the number till which you want to check all perfect number:  ");
	scanf("%d", &m);

	for (z = 0; y <= m; z++)

	{
		y = n + z;

		for (i = 1; i < y; i++)
		{
			k = y % i;

			if (k == 0)
			{
				p = p + i;
			}
		}

		if (p == y)
		{
			printf("\n%d is a perfect number", y);
		}

		p = 0;
	}
	return 0;
	getch();
}
