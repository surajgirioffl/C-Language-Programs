//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*4) method @2 for Reverse of entered string without using strrev() function of string*/
//66
//Write a program in c language to accept a string and reverse it without using strrev function of string.
//2nd Method
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, len = 0;
	char text[100], continue1;
	clrscr();
	do
	{
		printf("Write the text to get its reverse: ");
		gets(text);
		for (i = 0; text[i] != '\0'; i++)
			len = len + 1;
		printf("\nLength of string is %d\n", len);
		printf("Reverse of entered text is ");

		/*we can also reduce len by 1 because current value of n contains NULL in array bof text. But no issue if we print the null index because nothing will be printed at that place.*/
		//reverse part
		while (len >= 0)
		{
			printf("%c", text[len]);
			len--;
		}
		printf("\npress y for continue or press any other key to exit: ");
		scanf("%c", &continue1);
		getchar();
	} while (continue1 == 'y');
	printf("\nThanking You");
	return 0;
	getch();
}
/* Author- suraj kumar gir
     date- 30th april 2021
     purpose- home work by anand sir
 */