//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*2) copy one string into another without using strcpy() function of string*/
//62
/*Q2. Write a program is c language to accept a string through the keyboard and copy the given string in to another string without using strcpy function*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	char text1[100], text2[100];
	clrscr();
	printf("\nwrite the 1st text: ");
	gets(text1);
	printf("\nwrite the 2nd text: ");
	gets(text2);
	/*Now we have to copy characters of 2nd string in to 1st string. Let us see the process......*/
	for (i = 0; text2[i] != '\0'; i++)
	{
		text1[i] = text2[i];
	}
	printf("\nCopied String is %s", text1);
	return 0;
	getch();
}