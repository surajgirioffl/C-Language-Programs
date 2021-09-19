//c language
//1) Program> 2)if-else part> 3) Triangle
//2)To check triangle is valid or not method 2
//20
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c;
	printf("write the 1st side of triangle:");
	scanf("%d", &a);
	printf("\nwrite the 2nd side of triangle: ");
	scanf("%d", &b);
	printf("\nwrite the 3rd side of triangle: ");
	scanf("%d", &c);

	if (a + b > c)
	{
		if (b + c > a)
		{
			if (c + a > b)
			{
				printf("Given sides are the sides of triangle. So triangle is valid😎😎😎");
			}
			else
			{
				printf("😒😒😭😭Triangle is not valid😒😒😒😭");
			}
		}
		else
		{
			printf("😒😒😭😭Triangle is not valid😒😒😒😭");
		}
	}
	else
	{
		printf("😒😒😭😭Triangle is not valid😒😒😒😭");
	}

	return 0;
	getch();
}