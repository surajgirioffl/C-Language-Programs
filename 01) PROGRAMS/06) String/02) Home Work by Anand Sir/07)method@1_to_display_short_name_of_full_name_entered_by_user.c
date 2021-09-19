//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*7) method @1 To display short name of full name entered by user*/
//69
/*Q7. write a program in c language to accept a string through the keyboard as Munna Kumar jha and then display it in short as MK Jha.*/
/*to write the 1st letter of 1st name and middle name in capital with last name*/
//method@1
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char first[50], mid[50], last[50];
	int i;

	printf("\nwrite your 1st name: ");
	gets(first);
	puts("\nwrite your middle name: ");
	gets(mid);
	puts("\nwrite your last name: ");
	gets(last);

	printf("\nShort name is %c%c %s", toupper(first[0]), toupper(mid[0]), last);
	return 0;
	getch();
}
/*
author- suraj kumar giri
date- 1st may 2021
purpose- work given by anand sir

*/
