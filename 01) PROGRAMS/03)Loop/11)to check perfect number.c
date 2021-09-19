//c language
/*1) Programs> 3) Loop> 2) Any Loop> 3) Perfect Number*/
/*1) To check given number is perfect or not using loop*/
//31
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, k, i, p;
	clrscr();

	printf("write number to check perfect number or not:  ");
	scanf("%d", &n);
	p = 0;
	k = 0;
	for (i = 1; i < n; i++)
	{
		k = n % i;
		if (k == 0)
		{
			p = i + p;
		}
		else
		{
		}
	}

	if (p == n)
	{
		printf("\nGiven number %d is perfect number", n);
	}
	else
	{
		printf("\nGiven number is not perfect number");
	}
	return 0;
	getch();
}