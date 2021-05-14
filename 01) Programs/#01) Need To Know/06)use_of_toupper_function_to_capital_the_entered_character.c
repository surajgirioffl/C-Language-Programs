//c language
//1) Program> #1) Need to know
/*use of toupper() function to capital the entered character*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
	char c, con;
	do
	{
		puts("\nwrite the character: ");
		scanf(" %c", &c);
		printf("\n%c", toupper(c));
		puts("\npress y for continue or any other key to exit: ");
		scanf(" %c", &con);
	} while (con == 'y' || con == 'Y');
	puts("\nThanking You");
	getch();
}

/*
author- suraj kumar giri
date- 1st may 2021
purpose- in silsila of home work provided by anand sir to write the 1st character of 1st name and middle name entered by user in to uppercase i.e capital letter and last name same as entered by the user. So I am reserching over capitalisation then I come across this function
*/