//c language
/*1) Programs> 6) String> 3) others string related programs*/
/*2) Understanding the concept of string*/
//73
/*Sting doesn't take one-one character in array as interger. In c language in case of string %s, compilor already stores character by character in  array serialy from 0 onwards without taking any loop to store. It's happen automatically for making programming of string very easy because we use string too much. One can also add string character by character using loop but that is not user friendly. You can check the position of each character in array by below program. */
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char suraj[10];
	printf("\nwrite the name: ");
	scanf("%s", suraj);
	printf("%s", suraj);
	printf("\n%c", suraj[1]);
	return 0;
	getch();
}
