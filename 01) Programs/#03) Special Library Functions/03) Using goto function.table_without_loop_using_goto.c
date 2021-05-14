//c language
//1) Program> #3) some important functions> 1) goto function
//3) table of any number without using loop using goto function
#include <stdio.h>
int main()
{
	int num, i = 1;
	printf("Enter the number whose table you want to print?");
	scanf("%d", &num);
table:
	printf("%d x %d = %d\n", num, i, num * i);
	i++;
	if (i <= 10)
		goto table;
}