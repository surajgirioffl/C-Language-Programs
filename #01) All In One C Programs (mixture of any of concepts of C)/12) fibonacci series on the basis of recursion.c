//c language
/* */
/* */
//
/*Q. make a program of fibonacci series on  the basis of recursion*/
//started on 6th July 2021
//COMPLETED

#include <stdio.h>
int num = 0;
void fibonacci(int a, int b); //without specification of return type, by default it will int type
int main()
{
	unsigned short n;
	puts("How many numbers in fibonacci series are you want to print:");
	scanf("%hu", &n);
	num = n;
	printf("0 1 ");
	//printf("%d");
	fibonacci(0, 1);
}

void fibonacci(int a, int b)
{
	static int n; //to count. It remains safe in next call of function. auto initialise by zero just like global but valid only in own function not globally
	int c;		  //for next value of series
	c = a + b;
	printf("%d ", c);
	n++;
	if (n != num - 2)
		return fibonacci(b, c);
}
/*
   author~ suraj giri
   completion date~ 8th July 2021
   purpose~ told by Anand Sir
*/