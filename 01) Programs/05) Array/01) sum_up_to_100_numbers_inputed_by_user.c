//c language
/*1) Programs> 5) Array> 1) Addition
/*1) sum up to 100 numbers(Max) as inputed by user using concept of array*/
//40
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[100], n, sum, i;
	clrscr();
	printf("write the number of numbers you want to add: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\nwrite the number to add: ");
		scanf("%d", &a[i]);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	printf("\nsum of numbers are %d", sum);

	return 0;
	getch();
}
