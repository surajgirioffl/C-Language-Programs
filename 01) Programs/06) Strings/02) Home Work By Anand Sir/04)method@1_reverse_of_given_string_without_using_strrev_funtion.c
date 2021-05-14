//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*4) method @1 for Reverse of entered string without using strrev() function of string*/
//65
/*Q4. Write a program in c language to accept a string through the keyboard and find its reverse without using strrev function*/
//1st Method
#include <conio.h>
#include <stdio.h>

int main()
{
	int i, n = 0;
	char str1[100], cnt;
	clrscr();
	do
	{
		printf("write the string: ");
		gets(str1);

		for (i = 0; i >= 0; i++)
		{
			if (str1[i] == '\0')
			{
				n = i - 1;
			}
			if (n != 0)
				break;
		}
		//	printf("%c", str1[n]);
		while (n >= 0)
		{
			printf("%c", str1[n]); /*here I have printed n in which NULL exists. So nothing will be printed on console. NULL print nothing. So after decrement character will get displayed on console. We can also initiate with n-1 but there is no effect of this because at the array n there is NULL which doesn't print anything. So Don't worry about that*/
			n--;
		}
		printf("\nPress y for continue or press any key to exit: ");
		scanf("%c", &cnt);
		getchar();
	} while (cnt == 'y');
	printf("\nThanking You");

	return 0;
	getch();
}