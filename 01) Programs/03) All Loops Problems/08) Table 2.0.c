//c language
/*1) Programs> 3) Loop> 1) while loop> 5) Table*/
/*2) To find table of any number using while loop method second*/
//28
#include <stdio.h>
#include <conio.h>
int main()
{
	int a = 1, b, c;
	clrscr();
	printf("Enter Any Value : ");
	scanf("%d", &b);
	printf("Table of %d is : ", b);
	while (a <= 10)
	{
		c = b * a;
		printf(" \n%d ", c);
		a++;
	}
	return 0;
	getch();
}

//Table with While Loop