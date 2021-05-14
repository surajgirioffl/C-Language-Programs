//c language
/*1) Programs> 3) Loop> 2) Any Loop> 4) Prime number and Composite number*/
/*1) To check given number is prime or composite using loop*/
//34
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int i, n, k;
	printf("write the number to check prime or not as well as composite: ");
	scanf("%d", &n);
	i = 2;
	k = 0;
	if (n == 2)
	{
		printf("\n%d is prime", n);
	}
	else
	{
	}
	if (n < 2)
	{
		printf("\n %d is neither composite nor prime", n);
	}
	else
	{
	}

	while (i < n)
	{
		k = n % i;
		i++;
		if (k == 0)
		{
			printf("\n%d is not prime. So it is a composite number", n);
			exit(0);
		}
	}

	if (k != 0)
	{
		printf("\n %d is prime", n);
	}

	return 0;
	getch();
}
//BY SURAJ KUMAR GIRI
//Concept Of Munna Sir