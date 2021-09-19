//c language
/*1) Programs> 6) String> 1) Function of string
/*5) Concatenation or addition of two strings using strcat() function of string*/
//59
//Concatenation of two strings using strcat function
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char text1[100], text2[50];
	clrscr();
	printf("\nwrite the 1st text:  ");
	gets(text1);
	printf("\nwrite the 2nd text:  ");
	gets(text2);

	//Now we use function strcat to cancatenate two strings
	strcat(text1, " ");
	strcat(text1, text2);

	printf("\n\nCancatenated text is %s", text1);

	return 0;
	getch();
}