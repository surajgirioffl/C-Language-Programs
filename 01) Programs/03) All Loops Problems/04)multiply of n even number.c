//c language
//1) Programs> 3) Loop> 1) while loop> 2) even number
//3) To find multiplication of n (as per user input) even numbers using while loop
//24
#include <stdio.h>
#include <conio.h>
void main()
{
	int i, k = 0, n, mult = 1;
	printf("write the numbers of even number you want to calculate their sum:    ");
	scanf("%d", &n);

	i = 1;
	while (i < n + 1)
	{
		k = i * 2;
		i++;
		mult = mult * k;
		printf("\n%d\n", k);
	}

	printf("\nMultiplication of all even number is %d", mult);
	printf("\n PROGRAM BY SURAJ GIRI AND DIPU SINGH");

	getch();
}