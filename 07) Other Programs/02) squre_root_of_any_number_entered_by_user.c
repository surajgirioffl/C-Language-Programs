//c language
/*7) Other Programs*/
/*2) squre root of any number entered by user*/
//83
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()

{
	//	int n;
	float n, b;
	char c;
	do
	{
		clrscr();
		printf("\nwrite your number: ");
		scanf("%f", &n);
		b = sqrt(n);

		printf("\n%f", b);

		printf("\nwrite a to continue or any other key to exit: ");
		scanf(" %c", &c);
	} while (c == 'a');
	printf("Thanking You");

	return 0;
}
/*
author- suraj kumar giri
date- 5th may 2021
purpose- for problem bases on akhilesh class 8. 

*/