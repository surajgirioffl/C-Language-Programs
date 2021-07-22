//C Language
/* #1) All In One C Programs (mixture of any of concepts of C)*/
/* 11) To store a string containing 3 words then store these  3 words in three rows of 2 dimensional array and display them.c */
//111
/*Q.Write a C program to take a string containing 3 words then store these 3 words into 3 different rows in 2 dimensional array then display these 3 rows. */

#include <stdio.h>
int main()
{
	char str1[30];
	char str2[3][10];
	printf("write the 3 strings in same row with space:\n");
	gets(str1);

	//variable that will use in for loop
	short space = 0;
	short j = 0;
	short k = 0;
	short l = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{
		//for checking space
		if (str1[i] == ' ')
			space++;

		//for first string
		if (str1[i] != ' ')
		{
			if (space == 0)
			{
				str2[0][j] = str1[i];
				j++;
			}
		}

		//for 2nd string
		if (str1[i] != ' ')
		{
			if (space == 1)
			{
				str2[1][k] = str1[i];
				k++;
			}
		}

		//for 3rd string
		if (str1[i] != ' ')
		{
			if (space == 2)
			{
				str2[2][l] = str1[i];
				l++;
			}
		}
	}
	str2[0][j] = '\0';
	str2[1][k] = '\0';
	str2[2][l] = '\0';

	puts("\n====SEPERATE STIRNG ARE FOLLOWING===");
	//now printing the string seperately
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; str2[i][j] != NULL; j++)
			printf("%c", str2[i][j]);
		printf("\n");
	}
	return 0;
}

/* 
  author ~ suraj kumar giri
  concept of suraj kumar giri
  completed in college
*/
