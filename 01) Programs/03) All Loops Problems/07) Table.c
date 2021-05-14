//c language
/*1) Programs> 3) Loop> 1) while loop> 5) Table*/
/*1) To find table of any number method first*/
//27
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, t, n;
	clrscr();
	printf("write the integer to show it's table: ");
	scanf("%d", &n);
	i = 1;
	while (i < 11)
	{
		t = n * i;

		printf("\n%dX%d=%d", n, i, t);
		i++;
	}

	return 0;
	getch();
}