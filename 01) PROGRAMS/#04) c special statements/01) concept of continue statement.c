//c language
/* 1) programs> #4) c special statements> */
//1) concept of continue statement
/*clear concept of continue statement to skip some lines of code*/
//86
#include <stdio.h>
int main()
{
	int i, n;
	for (i = 1; i < 101; i++)
	{
		printf("\nwrite the value of n to see any random result: ");
		scanf("%d", &n);
		if (n == 10 || n == 50 || n == 100)
		{
			printf("\ncondition satisfy means you have entered %d. So No further lines of code will execute. All next lines of code till '}' will skip by compilor and compilor will go for next iteration", n);
			continue; /*if condition witll satisfy then lines of code from 15 to 19 will be skips by compilor and compilor will go in next iteration. If condition not satisfy then every line of code will execute without any issue.*/
		}
		printf("\nyour value is none of 10 or 50 or 100\n");
		printf("you are supar man bro\n");
		printf("what a osm number entered by you i.e %d\n", n);
		printf("done for now. See you later\n");
		printf("Thanking You");
	}
	return 0;
}
