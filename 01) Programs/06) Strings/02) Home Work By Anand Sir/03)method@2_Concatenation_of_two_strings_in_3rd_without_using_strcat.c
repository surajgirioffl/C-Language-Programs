//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*3) method @2 for concatenation of two strings in 3rd string without using strcat() function of string*/
//64
/* Q3. Write a program in c language to accept a string through the keyboard and these two string concatenate in third string and display it without using strcat function*/
//we can use NULL at the place of '\0'. Got it
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j;
	char str1[100], str2[100], str3[200];

	printf("\nwrite 1st string: ");
	gets(str1);
	printf("\nwrite 2nd string: ");
	gets(str2);
	j = 0;
	for (i = 0; str1[i] != '\0'; i++)
		str3[i] = str1[i];

	str3[i] = ' ';
	i = i + 1;
	while (str2[j] != '\0')
	{
		str3[i] = str2[j];
		j++;
		i++;
	}
	printf("\nconcatenated string is %s", str3);
	return 0;
	getch();
}