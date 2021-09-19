//c language
/*1) Programs> 6) String> 3) others string related programs*/
/*5) To display ASCII value of any character written by user*/
//76
//To display ASCII value of characters entered by user
#include <stdio.h>
#include <conio.h>

int main()
{
	char ch, chh;
	//int getchar(void);
	do
	{
		printf("\nWrite the character to find its ASCII value:  ");
		scanf("%c", &ch);
		getchar();

		printf("\nThe ASCII value of %c is %d", ch, ch);

		printf("\npress y to continue or any other key to exit: ");
		scanf("%c", &chh);
		getchar();
	} while (chh == 'y' || chh == 'Y');
	printf("\nThanking You");
	return 0;
	getch();
}