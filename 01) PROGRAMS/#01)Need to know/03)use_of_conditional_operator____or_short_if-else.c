//c language
//1) Program> #1) Need to know
//3) Use of conditional operator '?: or you can say short if-else
#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b;
	printf("\nwrite the value of a: ");
	scanf("%d", &a);
	b = a > 0 ? 5 : -1;
	printf("\n%d", b);
	return 0;
	getch();
}
