//c language
/*1) Programs> 6) String> 3) others string related programs */
/*07) (method@2)To accept multiple strings from user using two dimensional array*/
//96
#include <stdio.h>
int main()
{
	char string[11][50];
	int i;

	for (i = 0; i < 11; i++)
	{
		printf("\nwrite the name: ");
		gets(string[i]);
	}
	for (i = 0; i < 11; i++)
		puts(string[i]);

	return 0;
}