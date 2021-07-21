//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir */
/*09) To shortby the multiple string entered by user in alphabetical order.c */
//110
/*Q. write a program to shortby the multiple strings entered by user in alphabetical order */

#include <stdio.h>
void shortby(char text[50][50], int k);
int main()
{
	char name[50][50];
	int num, i;
	printf("write number of text you want to enter: \n");
	scanf("%d", &num);
	getchar();
	for (i = 0; i < num; i++)
	{
		printf("write text number %d:  ", i + 1);
		fgets(name[i], 50, stdin);
	}
	shortby(name, num);
	return 0;
}
void shortby(char text[50][50], int k)
{
	int i, j;
	char temp[50]; // to store the string which will lost during use of strcpy()
				   /*
LOGIC: 
every string will use to compare with all next strings. i is taken for string which
is use to compare with other strings. j is taken for another string which are next 
to that of ith string. then in each iteration one string will be came 1st (shorted).
*/
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (strcmp(text[i], text[j]) > 0)
			{
				strcpy(temp, text[i]);	// for store text[i] before lossing it
				strcpy(text[i], text[j]); //loss of text[i] and replacing with small string text[j]
				strcpy(text[j], temp);	//due to this no string will lost and text[i] which is stored in tempt will replace the text[j]
			}
		}
	}
	printf("\n*****SHORTED STRINGS*****\n");
	for (i = 0; i < k; i++)
		printf("%s", text[i]);
}