//c language
/*1) Programs> 3) Loop> 2) Any Loop> 2) LCM*/
/*1) To find LCM of three number using loop*/
//30
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, k, p = 0, i;
	clrscr();

	printf("enter the value of 1st number: ");
	scanf("%d", &a);
	printf("\nenter the value of 2nd number: ");
	scanf("%d", &b);
	printf("\nenter the value of 3rd number: ");
	scanf("%d", &c);

	if (a > b)
	{
		if (a > c)
		{
			p = a;
		}
	}
	else
	{
		if (b > c)
		{
			p = b;
		}
		else
		{
			p = c;
		}
	}

	//printf("\n%d is greater",p);
	i = 0;
	k = p;
	while (k >= p)
	{
		k = p + i;
		i++;
		if (k % a == 0)
		{
			if (k % b == 0)
			{
				if (k % c == 0)
				{
					printf("\n👩‍💻👩‍💻😁😁%d is LCM of given numbers😎😎😎😎", k);
					printf("\n\n****THIS PROGRAM IS MADE BY MR. SURAJ KUMAR GIRI JI****");

					exit(0);
				}
			}
		}
	}

	return 0;
	getch();
}