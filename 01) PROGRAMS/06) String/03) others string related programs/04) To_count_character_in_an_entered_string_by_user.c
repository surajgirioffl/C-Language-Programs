//c language
/*1) Programs> 6) String> 3) others string related programs*/
/*4) To count number of characters in an enterd string by user*/
//75
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char suraj[20]; //Don't miss to write array.
	int i, s = 0;
	printf("\nWrite something here: ");
	gets(suraj);
	puts(suraj); //Just for fun

	for (i = 0; suraj[i] != '\0'; i++)
	{
		s = s + 1;
	}
	printf("\n\nnumber of character is %d", s);

	printf("\n %c", suraj[2]); /*To print any character i.e automatically stored in particular index number of array by c language.*/
	getch();
	return 0;
}