//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir
/*5) To find the entered character present in enterd string or not*/
//67
/*Q5. write a program in c language to accept a string and a character through the keyboard. then find the character present in given string or not.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int cnt = 0, i;
	char str[100], ch;
	printf("\nwrite the string ");
	gets(str);
	printf("\nwrite the character: ");
	scanf("%c", &ch);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
			cnt = cnt + 1;
	}
	if (cnt != 0)
		printf("\ncharacter `%c` is present in string `%s` and repeated %d times.", ch, str, cnt);
	else
		printf("\nGiven character `%c` is not present in string `%s`", ch, str);

	return 0;
	getch();
}

/* author- suraj kumar giri
    date- 30th april 2021
    purpose- work given by anand sir
 */