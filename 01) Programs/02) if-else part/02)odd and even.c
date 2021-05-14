//c language
//1) Program> 2)if-else part> 2) odd-even
//1)To find given number is odd or even
//18
#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	clrscr();

	printf("write the number to check odd or even: ");
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		printf("\n Given number %d is even", n);
	}
	else
	{
		printf("\n Given number %d is odd", n);
	}

	return 0;
	getch();
}