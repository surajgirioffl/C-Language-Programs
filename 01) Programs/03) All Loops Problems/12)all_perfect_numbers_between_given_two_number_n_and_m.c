//c language
/*1) Programs> 3) Loop> 2) Any Loop> 3) Perfect Number*/
/*2) To display all perfect number between given two number using loop*/
//32
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, m, k, r = 0, i, z, p = 0;
	printf("write the number from which you want to check perfect number: ");
	scanf("%d", &n);
	printf("\nwrite the number till which you want to check perfect number:  ");
	scanf("%d", &m);

	i = 0;
	while (z <= m)
	{
		z = n + i;
		i++;
		for (k = 1; k < z; k++)
		{
			r = z % k;
			if (r == 0)
			{
				p = p + k;
			}
		}

		if (p == z)
		{
			printf("\n\t%d is a perfect number", p);
		}
		p = 0;
	}

	return 0;
	getch();
}
