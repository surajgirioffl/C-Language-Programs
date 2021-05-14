//c language
//1) Program> 1) simple programs
//4) To find sum of two numbers
//16
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	char ch;
	do
	{
		printf("\nwrite the number a and b respectively: ");
		scanf("%d%d", &a, &b);
		printf("\nSum of given number is %d", a + b);

		printf("\nwrite y to continue or any key to exit: ");
		scanf(" %c", &ch);
	} while (ch == 'y');
	printf("\nThanking You");

	return 0;
	getch();
}
/*Author- Suraj Kumar Giri
    Date- 29th April 2021
    purpose- problem in do while loop in a question of a string. So I made this program to clear my concept and understand the error after comparison.
    */