//c language
/*1) Programs> 6) String> 1) Function of string
/*1) To find length of string using string function*/
//55
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int n;
	char s[100];
	clrscr();
	printf("\nwrite the string to find its length: ");
	scanf("%[^\n]", s);
	n = strlen(s);
	printf("\nLength of written string is %d", n);

	return 0;
	getch();
}
