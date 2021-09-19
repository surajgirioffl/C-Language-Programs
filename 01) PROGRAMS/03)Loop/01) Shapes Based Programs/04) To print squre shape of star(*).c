//c language
/*1) Programs> 3) Loop> 2) Any Loop> 5) shapes based programs*/
//4) To print squre shape of star(*)
//92
#include <stdio.h>
void main()
{
	int n, i, j;
	printf("write the number of stars you want to get print in side of squre: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		printf("* ");

	for (i = 0; i < n - 2; i++)
	{
		printf("\n* ");
		for (j = 0; j < n - 1; j++)
		{
			if (j < n - 2)
				printf("  ");
			else
				printf("* ");
		}
	}
	printf("\n");
	for (i = 0; i < n; i++)
		printf("* ");
}
/*
author- suraj kumar giri
date- 12th may 2021
*/