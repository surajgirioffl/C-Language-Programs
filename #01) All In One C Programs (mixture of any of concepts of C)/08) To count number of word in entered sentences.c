//c language
/*#1) All In One C Programs (mixture of any of concepts of C)>*/
/*08) To count number of words in entered sentences.c*/
//106
/* write a program to count numbers of words in entered sentences by user*/
//COMPLETED
#include <stdio.h>
int count_word(char suraj[600]);
void main()
{
	char str[500];
	puts("write your sentence to count number of words in it: ");
	gets(str);
	printf("\nNumber of words are %d", count_word(str));
}
int count_word(char suraj[600])
{
	int i, n = 0;
	for (i = 0; suraj[i] != '\n'; i++)
	{
		if (suraj[i] == ' ')
			n = n + 1;
	}
	return n + 1;
}
/*
  author- suraj kumar giri
  date of completion-  24th June 2021
  purpose- mention in question
*/