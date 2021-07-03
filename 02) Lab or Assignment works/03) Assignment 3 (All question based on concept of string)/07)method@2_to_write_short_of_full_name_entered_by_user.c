//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*7) method @2 To display short name of full name entered by user*/
//70
/*Q7. write a program in c language to accept a string through the keyboard as Munna Kumar jha and then display it in short as MK Jha.*/
/*to write the 1st letter of 1st name and middle name in capital with last name*/
//method@2
#include <stdio.h>
#include <ctype.h>
int main()
{
	int i, n[10], k = 0, j = 0;
	char name[100], last[50];
	puts("\nwrite your full name: ");
	gets(name);

	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == ' ')
		{
			n[k] = i + 1;
			k++;
		}
	}
	if (n[1] != '\0')
	{
		for (i = n[1]; name[i] != '\0'; i++)
		{
			last[j] = name[i];
			j++;
		}
	}
	printf("\nshort name is %c%c %s", toupper(name[0]), toupper(name[n[0]]), last);

	return 0;
}
/*
author- suraj kumar giri
date- 1st may 2021
purpose- work given by anand sir

*/
