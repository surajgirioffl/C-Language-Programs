//all programs of function should be modify by name, program numbers etc to upload.....
//c lanaguage
/* */
/*  To count number of words in entered sentence.c*/
//107
/* write a program to find sum of digits of given integer using function*/
#include <stdio.h>
int sum_digit(int num);
int main()
{
	int n;
	printf("write the number:\n");
	scanf("%d", &n);
	printf("The Sum of digits are %d", sum_digit(n));
	return 0;
}
int sum_digit(int num)
{
	int r;
	int sum = 0;
	for (int i = 0; num > 0; i++)
	{
		r = num % 10;
		sum = sum + r;
		num = num / 10;
	}
	return sum;
}