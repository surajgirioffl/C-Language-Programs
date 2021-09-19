//c language
//1) Programs> 3) Loop> 1) while loop> 2) even number
//1) To show even number as per user input using while loop
//22
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, i, k, sum = 0;
	printf("show 1st n even number along with its sum. Enter the value of n:  ");
	scanf("%d", &n);
	i = 1;
	while (i < n + 1)
	{
		k = 2 * i;
		printf("\n%d", k);
		i++;
	}

	/*	scanf("%d",&k);
	sum=k;
	printf("sum is %d",sum);   */

	return 0;
	getch();
}