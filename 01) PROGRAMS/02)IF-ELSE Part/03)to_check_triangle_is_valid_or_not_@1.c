//c language
//1) Program> 2)if-else part> 3) Triangle
//1)To check triangle is valid or not method 1
//19
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("enter the 1st side of triangle: ");
	scanf("%d", &a);
	printf("\nenter the 2nd side of triangle: ");
	scanf("%d", &b);
	printf("\nenter the 3rd side of triangle: ");
	scanf("%d", &c);

	if (a < b + c && b < c + a && c < a + b)
	{
		printf("\nGiven triangel with side %d,%d and %d is VALID😁😎", a, b, c);
	}
	else
	{
		printf("\nGiven sides of triangle is NOT VALID😒😒");
	}
	printf("\n\nThis program is made by SURAJ KUMAR GIRI");
	return 0;
	getch();
}