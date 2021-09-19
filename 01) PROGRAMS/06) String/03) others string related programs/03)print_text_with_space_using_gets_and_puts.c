//c language
/*1) Programs> 6) String> 3) others string related programs*/
/*3) print text with space using gets() and puts() library function*/
//74
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char c[100], d[10]; /*array is compulsory because without array c compilor can't keep its character. In case of string, c itself keep characters in array automatically. You can check by asking to print s[i]. where is index number of array.*/
	printf("write your name:  ");
	gets(c);
	puts(c);
	/*Problem is only with scanf in case of multiwords string. There is no issue in prinf function. See below.*/
	printf("%s", c);

	return 0;
	getch();
}