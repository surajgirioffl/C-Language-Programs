//to understand the concept of forget of data and declaration by compilor after crossing a block
#include <stdio.h>
int main()
{
	int a = 0;
	if (a == 0)
	{
		int b = 4;
	}
	printf("%d is the value of b", b);
}