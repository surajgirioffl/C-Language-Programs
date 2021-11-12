//c language
/*1) Programs> 3) Loop> 2) Any Loop> 5) shapes based programs*/
/*1) To print star(*) n (as per user input) times in a shape*/
//35
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, i, k;
	printf("write the value of n: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (k = 0; k <= i; k++)
		{
			printf(" * ");
		}
		printf("\n");
	}

	return 0;
	getch();
}