//c language
/*1) program> 7) function chapter> 2) simple programs> */
//1) sum of two number using function
//87
//1st problem on function
#include <stdio.h>
int suraj(int a, int b);
int main()
{
	int x, y, sum;

	printf("\nwrite value of a and b repectively in integer:  ");
	scanf("%d%d", &x, &y);
	sum = suraj(x, y);
	printf("\nsum of entered data is %d", sum);
	return 0;
}

int suraj(int a, int b)
{
	int d;

	d = a + b;
	return d;
}
/*
author- suraj kumar giri
date- 6th may 2021(summer vacation and corona relockdown and now I am at home. Try to revisit muzaffarpur next day
purpose- Just see how another user-defined function work and they are called and used as many times as I can. Today i have studied about and do my 1st practical and this is my 1st ultra simple problem.


*/