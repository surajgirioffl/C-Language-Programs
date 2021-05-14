//c language
//1) Program> #2) Some Tricky Programs> 1) addition
/*2) addition of two numbers without using '+' (plus) operator second method*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, sum;
	clrscr();
	printf("write 1st number: ");
	scanf("%d", &a);

	printf("\nWrite 2nd number: ");
	scanf("%d", &b);

	sum = ((-1) * (-a - b));
	printf("Required sum of %d and %d is %d", a, b, sum);

	getch();
}