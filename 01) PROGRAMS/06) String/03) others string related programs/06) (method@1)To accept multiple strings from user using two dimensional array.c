//c language
/*1) Programs> 6) String> 3) others string related programs */
/*06) (method@1)To accept multiple strings from user using two dimensional array*/
//95
#include <stdio.h>
void main()
{
	char string[11][50];
	int i;

	for (i = 0; i < 11; i++)
	{
		printf("\nwrite the name: ");
		scanf(" %[^\n]", string[i]);
	}
	for (i = 0; i < 11; i++)
		printf("\n%s", string[i]);
}