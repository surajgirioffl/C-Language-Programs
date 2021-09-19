//c language
//1) Program> #3) some important functions> 1) goto function
//1) print any name n times using goto function
#include <stdio.h>
int main()
{
	int i = 1;

suraj:
	printf("\nSuraj kumar giri %d", i);
	i++;

	if (i < 11)
		goto suraj;

	return 0;
}