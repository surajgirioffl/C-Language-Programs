//C language
/* #1) All In One C Programs (mixture of any of concepts of C)*/
/* 10) to convert text written by user into uppercase.c*/
//109
/* Q. Write a program to convert text written by user into uppercase*/

#include <stdio.h>
int main()
{
	char str[111];
	puts("write something: ");
	gets(str);
	puts("\nText in capital is:");
	for (int i = 0; str[i] != '\0'; i++)
		printf("%c", toupper(str[i]));

	return 0;
}