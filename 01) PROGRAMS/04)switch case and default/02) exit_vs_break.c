//c language
/*1) Programs> 4) switch case and default
/*1) exit vs break statement*/
//39
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int a, x, y;
	printf("\n1 means add \n2 means subtract");
	printf("\nselect your choice: ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("\nwrite the 1st and 2nd number respectively:");
		scanf("%d%d", &x, &y);
		printf("\n\nsum is %d", x + y);
		exit(0);

	case 2:
		printf("\nwrite the 1st and 2nd number respectively:");
		scanf("%d%d", &x, &y);
		printf("\n\nsubtract is %d", x - y);
		break;

	default:
		printf("\nyou have selected wrong choice: ");
	}
	return 0;
	getch();
}