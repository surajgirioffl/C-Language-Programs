//c language
//1) Program> #1) Need to know
/*5) do while special with use of getchar() to avoid '\n' of previous scanf*/
#include <conio.h>
int main()
{
	int a, b;
	char c;
	do
	{
		printf("\nwrite the value of a:  ");
		scanf("%d", &a);
		printf("\nwrite the value of b:  ");
		scanf("%d", &b);
		getchar();
		printf("\nSum is %d", a + b);

		printf("\npress y for continue or any other key for exit: ");
		scanf("%c", &c);
	} while (c == 'y' || c == 'Y');
	if (c != 'y' || 'Y')
		printf("\nThanking You");
}