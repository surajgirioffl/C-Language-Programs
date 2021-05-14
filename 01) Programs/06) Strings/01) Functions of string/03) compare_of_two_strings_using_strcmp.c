//c language
/*1) Programs> 6) String> 1) Function of string
/*3) compare of two strings using strcmp() function of string*/
//57
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int a;
	char c[10], d[10];

	printf("\nwrite any text: ");
	gets(c);
	printf("\nwrite any text: ");
	gets(d);
	a = strcmp(c, d);
	printf("%d", a);
	return 0;
	getch();
}