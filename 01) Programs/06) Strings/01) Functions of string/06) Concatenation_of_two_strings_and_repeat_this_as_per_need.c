//c language
/*1) Programs> 6) String> 1) Function of string*/
/*6) Concatenation of two strings and repeat this as per need using do while loop*/
//60
/*Concatenation of two strings taken as input from user and repeat it as per user need*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char a[100], b[50];
	char ch;
	do
	{
		printf("\nwrite 1st text: ");
		gets(a);
		printf("\nwrite 2nd text: ");
		gets(b);
		strcat(a, " ");
		strcat(a, b);
		printf("\nconcatenated string is %s", a);

		printf("\nwrite y to continue or any key to exit: ");
		scanf("%c", &ch);
		getchar();
	} while (ch == 'y');
	printf("\nThanking You");

	return 0;
	getch();
}