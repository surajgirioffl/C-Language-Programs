//c language
/* *1) Programs> 6) String> 1) Function of string*/
/*7) How to make a string empty if it already contains string literals*/
//Use of memset() function
//93
#include <stdio.h>
#include <string.h>
int main()
{
	char suraj[61] = "this is me";			/*to make empty*/
	char giri[111] = "suraj is a good boy"; /*to replace first five characters to #*/
	/*I have to make array bounded char variable "suraj" empty.*/
	/* And I have also to show use of memset() function to replace the character of shells to another single character(same in all replaced shell) in given number of shells from 0th index.*/

	memset(suraj, 0, 61); /*to empty the array. we can also use memset(suraj, '\0', 61)*/
	memset(giri, '#', 5);

	printf("\n%s", suraj);
	printf("\n%s", giri);

	return 0;
}
/* we can't use suraj[0]='\0' to empty the array because it only replace the 0th character with NULL. Others character of shells remain same*/
/*
author- suraj kumar giri
date- on 14th february 2021
purpose- in search to empty an array bounded variable of char data type in question of covert number in to word
*/