//c language
/*1) Programs> 6) String> 1) Function of string
/*2) To write full name using strcat() function of string*/
//56
#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[20], c[20];
	printf("\nwrite your 1st name: ");
	scanf("%s", a);
	printf("\nwrite your middle name: ");
	scanf("%s", b);
	printf("\nwrite your last name: ");
	scanf("%s", c);
	strcat(a, " ");
	strcat(a, b);
	strcat(a, " ");
	strcat(a, c);
	printf("\nYour Full Name is %s", a);
	return 0;
	getch();
}