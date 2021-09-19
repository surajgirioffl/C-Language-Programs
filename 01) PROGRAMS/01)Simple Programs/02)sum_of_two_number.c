//c language
//1) Program> 1) simple programs
//2) sum of two numbers
//14
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, sum;
	clrscr();
	printf("Write 1st number: ");
	scanf("%d", &a);
	printf("\nWrite 2nd number: ");
	scanf("%d", &b);

	sum = a + b;
	printf("sum of given number is %d ", sum);

	getch();
}