//c language
/*1) Programs> 6) String> 1) Function of string
/*4) copy 2nd string into 1st string using strcpy() function of string*/
//58
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char text1[100], text2[100];
	printf("\nwrite the 1st text: ");
	gets(text1);
	printf("\nwrite the 2nd text: ");
	gets(text2);

	strcpy(text1, text2);
	printf("\nThe copied text is %s", text1);
	return 0;
	getch();
}