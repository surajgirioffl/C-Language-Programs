#include <stdio.h>
void suraj(int p[11]);
int main()
{
	int a[11];
	int i;
	for (i = 0; i < 7; i++)
	{
		puts("write number: ");
		scanf("%d", &a[i]);
	}
	suraj(a);
	printf("\nFrom main function. a[5] is %d", a[5]);

	return 0;
}
void suraj(int p[11])
{
	printf("\nFrom suraj function. p[5] is %d", p[5]);
}
/*
in case of passing of one dimesional or two dimesional
array to a function, we pass the array variable and store it
in an array bounded variable. when you pass only variable name
then it takes all elements of that array.
In case of pointer use the same concept.

*/