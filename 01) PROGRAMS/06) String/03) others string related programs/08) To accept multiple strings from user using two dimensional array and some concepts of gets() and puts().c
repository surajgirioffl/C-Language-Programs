//c language
/*1) Programs> 6) String> 3) others string related programs */
/*08) To accept multiple strings from user using two dimensional array and some concepts of gets() and puts()*/
//99
#include <stdio.h>
void main()
{
	int i, n;
	char string[222][111];
	printf("write the number of sentense or word you want: ");
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
		gets(string[i]);
	/*we can't use double quotes in gets because there is no need of any escape sequence etc in case of taking input from user.
		 So if we use double quotes in case of gets() then it shows error. and gets() and puts() are the library functin which accept only
		 single arguments.
		 In case of puts() we may need to use '\n', '\t' etc and other escape sequence etc. so we can use double quotes inside it and 
		 write the single arguments along with the escape sequence. But if we use double quotes then value will not changable.
		 It will print same as written similar as printf. It is need to know that puts auto send the cursor to the next line after every print.
		 */

	for (i = 0; i < n; i++)
		puts(string[i]); //puts only take single arguments

	for (i = 0; i < n; i++)
		printf("\n-%s- is the string inside array index %d", string[i], i);
}
/*
author- suraj kumar giri
date- 22nd may 2021
purpose- to understand the above concept
*/