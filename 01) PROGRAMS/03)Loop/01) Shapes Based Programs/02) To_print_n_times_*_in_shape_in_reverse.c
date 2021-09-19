//c language
/*1) Programs> 3) Loop> 2) Any Loop> 5) shapes based programs*/
/*2) To print star(*) n (as per user input) times in a shape in reverse*/
//36
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, k, i;
	clrscr();
	printf("write the number of times you want to print: ");
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		for (k = 0; k < i; k++)
		{
			printf(" ");
		}

		for (k; k < n + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
	getch();
}