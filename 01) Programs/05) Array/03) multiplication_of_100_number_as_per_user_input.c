//c language
/*1) Programs> 5) Array> 2) Multiplicaiton
/*1) multiplication of n numbers (up to 100) as per user input using concept of array*/
//42
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[100], n, m = 1, i;
	printf("write the numbers of number who you want to multiply: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\nwrite the number: ");
		scanf("%d", &a[i]);
		m = m * a[i];
	}
	printf("\nmultiplication of all number is %d", m);
	return 0;
	getch();
}