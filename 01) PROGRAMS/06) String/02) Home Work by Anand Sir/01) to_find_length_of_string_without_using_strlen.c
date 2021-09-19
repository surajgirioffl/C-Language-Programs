//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*1) To find length of string without using strlen() function of string*/
//61
/*Q1. Find the length of string without using strlen function*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int len = 0, i;
	char text[100];
	clrscr();

	printf("write any text to find it's length:  ");
	gets(text);

	for (i = 0; text[i] != '\0'; i++)
	{
		len = len + 1;
	}
	printf("\nLength of string is %d", len);
	return 0;
	getch();
}