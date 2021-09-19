//c language
//1) Programs> 3) Loop> 1) while loop> 2) even number
//2) To find sum of n (as per user input) even numbers using while loop
//23
#include <stdio.h>
#include <conio.h>
void main()
{
	int i, k = 0, n, sum = 0;
	printf("write the numbers of even number you want to calculate their sum:    ");
	scanf("%d", &n);

	i = 1;
	while (i < n + 1)
	{
		k = i * 2;
		i++;
		sum = sum + k;
		printf("\n%d\n", k);
	}

	printf("\nsum of all even number is %d", sum);
	printf("\n PROGRAM BY SURAJ GIRI AND DIPU SINGH");

	getch();
}