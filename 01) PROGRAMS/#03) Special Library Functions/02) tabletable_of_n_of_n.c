//c language
//1) Program> #3) some important functions> 1) goto function
//2) table of any number using goto function

#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 1, n, sum = 0;
	printf("\nwrite the number whose table you want to write:  ");
	scanf("%d", &n);
suraj:
	printf("\n%dx%d=%d", n, i, n * i);
	sum = sum + (n * i);
	i++;
	if (i < 11)
		goto suraj;
	printf("\nsum of table of %d is %d", n, sum);
	return 0;
	getch();
}