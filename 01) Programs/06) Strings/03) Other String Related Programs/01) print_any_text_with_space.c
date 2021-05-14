//c language
/*1) Programs> 6) String> 3) others string related programs*/
/*1) print any text with space*/
//72
#include <stdio.h>
#include <conio.h>
int main()
{
	char c[100];
	printf("write your name:  ");
	scanf("%[^\n]", c);
	printf("\n%s", c);
}
