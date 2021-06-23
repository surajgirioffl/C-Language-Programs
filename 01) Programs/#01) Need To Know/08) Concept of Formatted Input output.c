//c language
/*1) Program> #1) Need to know> */
/*08) Concept of Formatted Input and output.c */
//104
/*Q. write program on concept of Formated input and output. means modification that we can do in formated I/O function, to make your program more customisable on console. Also discuss about the concept of ignoring character i.e also known as suppression character*/
//Date of initiation- 22nd June 2021
//COMPLETED

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void integer();
void floating();
void string();
void ignoring_character();
void others();

int main(void)
{
	int n;
	char choice[5];
	do
	{
	again:
		clrscr();
		puts("1. For Formated Input output on integer");
		puts("2. For Formated Input output on Floating Point");
		puts("3. For Formated Input output on string");
		puts("4. For concept of suppression or ignoring characters");
		puts("5. Other concepts");
		puts("6. For exit the program");
		puts("\nNow write your choice.");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			integer();
			break;

		case 2:
			floating();
			break;

		case 3:
			string();
			break;

		case 4:
			ignoring_character();
			break;

		case 5:
			others();
			break;

		case 6:
			puts("\nThanking You \U0001F60A. See You. Bye Bye...........");
			exit(1);

		default:
			printf("\nwrong choice selected. Please write again correctly");
			goto again;
		}
		puts("\n\nDo You want to restart whole program again. yes or no:");
		scanf("%s", choice);
	} while (choice[0] == 'y' || choice[0] == 'Y');
	puts("\nThanking You \U0001F60A. See You. Bye Bye...........");
	return 0;
}

void integer()
{
	system("color 6");
	int a, b;
	char choice[5];
//1.For Input
again1:
	clrscr();
	printf("****For Input (In case of Integer. %%3d%%4d is used in scanf())****\n");
	printf("write a and b:\n");
	scanf("%3d%4d", &a, &b);
	printf("value of a and b after formating during taking input in scanf() are %d and %d\n", a, b);
	puts("Do you want to recheck this concept. yes or no:");
	scanf("%s", choice);
	if (choice[0] == 'y' || choice[0] == 'Y')
		goto again1;

//2. For Output
again2:
	clrscr();
	printf("\n****For Output (In case of Integer. %%4d and %%5 is used in printf())****\n");
	printf("write a and b:\n");
	scanf("%d%d", &a, &b);
	printf("In case of Right Justified.\nvalue of a and b are %4d and %5d\n", a, b);
	printf("In case of Left Justified.\nvalue of a and b are %-4d and %-5d\n", a, b);
	puts("Do you want to recheck this concept. yes or no:");
	scanf("%s", choice);
	if (choice[0] == 'y' || choice[0] == 'Y')
		goto again2;
}

void floating()
{
	float a, b;
	char choice[5];
//1.For Input
again1:
	clrscr();
	printf("****For Input (In case of Float. %%3f%%4f is used in scanf())****\n");
	printf("write a and b:\n");
	scanf("%3f%4f", &a, &b);
	printf("value of a and b after formating during taking input in scanf() are %f and %f\n", a, b);
	puts("Do you want to recheck this concept. yes or no:");
	scanf("%s", choice);
	if (choice[0] == 'y' || choice[0] == 'Y')
		goto again1;

//2. For Output
again2:
	clrscr();
	printf("\n****For Output (In case of Float. %%10f and %%12f is used in printf())****\n");
	printf("write a and b:\n");
	scanf("%f%f", &a, &b);
	printf("In case of Right Justified.\nvalue of a and b are %10f and %12f\n", a, b);
	printf("In case of Left Justified.\nvalue of a and b are %-10f and %-12f\n", a, b);
	printf("In case of Right Justified. \nvalue of a and b with 2 decimal placesare %10.2f and %12.2f\n", a, b);
	printf("In case of Left Justified. \nvalue of a and b with 3 decimal place are %-10.3f and %-12.3f\n", a, b);
	puts("Do you want to recheck this concept. yes or no:");
	scanf("%s", choice);
	if (choice[0] == 'y' || choice[0] == 'Y')
		goto again2;
}

void string()
{
	char str[50], str1[50];
	char choice[5];
//1.For Input
again1:
	clrscr();
	printf("****For Input (In case of String. %%4s is used in scanf())****\n");
	printf("write some text:\n");
	scanf("%4s", str);
	getchar();
	printf("entered text after formating during taking input in scanf() is %s\n", str);
	puts("Do you want to recheck this concept. yes or no:");
	scanf("%s", choice);
	getchar();
	if (choice[0] == 'y' || choice[0] == 'Y')
		goto again1;

//2. For Output
again2:
	clrscr();
	printf("\n****For Output (In case of String. %%10s is used in printf())****\n");
	printf("write text:\n");
	scanf("%s", str1);
	printf("In case of Right Justified.\nText is %10s\n", str1);
	printf("In case of Left Justified.\nText is %-10s\n", str1);
	printf("In case of Right Justified with a decimal(here 3 taken by me) point in case of string.\nText is %10.3s\n", str1);
	printf("In case of Left Justified with a decimal(here 3 taken by me) point in case of string.\nText is %-10.3s\n", str1);
	puts("Do you want to recheck this concept. yes or no:");
	scanf("%s", choice);
	if (choice[0] == 'y' || choice[0] == 'Y')
		goto again2;
}

void ignoring_character()
{
	unsigned short dd, mm, yy;
	printf("*****Concept of Ignoring Character*****\n");
	printf("write date in any format like dd/mm/yy or dd-mm-yy or dd.mm.yy\n");
	scanf("%hu%*c%hu%*c%hu", &dd, &mm, &yy);
	printf("\nDate is %hu/%hu/%hu", dd, yy, mm);
}

void others()
{
	int a, b;
	printf("\nwrite the integer value of a and b:\n");
	scanf("%d%d", &a, &b);

	printf("%%02d for a is %02d\n", a);
	printf("%%06d for b is %06d\n", b);
}

/*
 author- suraj kumar giri
 date of completion- 23rd June 2021
 Purpose- To understand the concept of fomated I/O
*/