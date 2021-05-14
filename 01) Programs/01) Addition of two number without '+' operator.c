//c language
//1) Program> #2) Some Tricky Programs> 1) addition
//1) Addition of two numbers without '+' (plus) operator

#include <stdio.h>
#include <conio.h>
int main()
{
	// to find sum of two numbers without using '+' operator. There are two methods to do so. one is to use 'ads' in mathematical operation and 2nd is used below..
	int x, y, sum;
	printf("write 1st number: ");
	scanf("%d", &x);

	printf("write 2nd number: ");
	scanf("%d", &y);

	sum = (((x * x) - (y * y)) / (x - y));
	printf("Sum is %d", sum);

	return 0;
	getch();
}