//c language
/*4) STOVR(stackoverflow)*/
/*1) string can't be compared using any conditional operator*/
//79
//Error not solved. Solved after reading pointer
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[20], n, i, sum = 0;
	char c[10];
	clrscr();
	do
	{
		printf("How many numbers you want to sum: ");
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			printf("\nwrite the number: ");
			scanf("%d", &a[i]);
			sum = sum + a[i];
		}
		printf("\nSum of numbers are %d", sum);

		printf("\nDo you want to continue. yes or no:  ");
		scanf("%s", c);
	} while (c == "yes");
	if (c == "no")
		printf("\nThanking You");
	else
		printf("\nWrong choice selected. Please select correct one");
	/*error because string can't be compared by == operator etc. Because.............  (study 1st pointer). Use function strcmp. In case of character c take character as interger and it is easily comparable in condition using any conditional operators. Got it.*/
	return 0;
	getch();
}