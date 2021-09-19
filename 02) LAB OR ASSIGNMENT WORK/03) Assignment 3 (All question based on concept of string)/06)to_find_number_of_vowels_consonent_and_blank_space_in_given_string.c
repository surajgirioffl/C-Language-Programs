//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*6) To find the number of vowels, consonents and blank space in given string*/
//68
/*Q6. write a program in c language to accept a string through the keyboard. Then find the number of vowels, consonents and blank space*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, vwl = 0, cons = 0, bls = 0;
	char str[100];
	printf("\nwrite the string:  ");
	gets(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			vwl = vwl + 1;
		else if (str[i] == ' ')
			bls = bls + 1;
		else
			cons = cons + 1;
	}

	printf("\nNumber of vowel is %d\nNumber of blank space is %d\nNumber of consonent is %d", vwl, bls, cons);

	return 0;
	getch();
}