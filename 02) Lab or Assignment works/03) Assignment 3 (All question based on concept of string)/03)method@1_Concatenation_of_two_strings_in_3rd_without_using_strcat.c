//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*3) method @1 for concatenation of two strings in 3rd string without using strcat() function of string*/
//63
/* Q3. Write a program in c language to accept a string through the keyboard and these two string concatenate in third string and display it without using strcat function*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, n;
	char string1[100], string2[100], string3[200];

	printf("\nWrite the 1st string: ");
	gets(string1);
	printf("\nWrite the 2nd string: ");
	gets(string2);

	for (i = 0; string1[i] != '\0'; i++)
		string3[i] = string1[i];
	string3[i] = ' ';
	i++;
	n = i;
	printf("\nvalue of n is %d", n);

	for (i = 0; string2[i] != '\0'; i++)
		string3[n + i] = string2[i];
	string3[n + i] = '\0';

	printf("\nConcatenated string is %s", string3);
	return 0;
	getch();
}
