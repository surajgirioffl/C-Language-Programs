//c language
//1) Programs> 3) Loop> 1) while loop> 3) natural number
/*1) To find sum of numbers till particular number in between series of given two numbers using while loop*/
//25
#include <stdio.h>
#include <conio.h>
int main()
{
	int c, i, x, y, k, z;
	clrscr();

	printf("write intial number: ");
	scanf("%d", &x);

	printf("write final number: ");
	scanf("%d", &y);

	printf("write the number till which you want to sum the series: ");
	scanf("%d", &c);

	i = 0;
	z = 0;
	k = 0;
	while (i < y - x)
	{
		k = x + i;
		i++;

		if (k <= c)
		{
			z = z + k;
		}
		else
		{
		}
	}
	printf("\n\n Required sum till %d is %d", c, z);

	return 0;
	getch();
}