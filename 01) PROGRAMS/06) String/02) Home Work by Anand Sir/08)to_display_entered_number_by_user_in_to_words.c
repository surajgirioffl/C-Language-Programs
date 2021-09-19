//c language
/*1) Programs> 6) String> 2) Home Work by Anand Sir*/
/*8) To display entered number by user in to words*/
//71
/*Q8. write a program in c language to accept a number as ruppees. Then display the number in words*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int n, i, r, p; /*r for remainder. i for increment. n for ruppes in number taken from user.*/
	char str1[500] = {0}, str2[500] = {0}, str3[500] = {0}, str4[500] = {0}, str5[500] = {0}, str6[500] = {0}, str7[500] = {0}, str8[500] = {0}, str9[500] = {0}, cont;
	do
	{
		clrscr();
		printf("\nvalid till 99 crore 99 lakhs 99 thousand 9 hundred 99");
		printf("\n\nwrite your ruppes in integer: ");
		scanf("%d", &n);
		p = n;
		if (n == 0)
			printf("\nYou don't have any ruppe.");

		i = 0;
		while (n > 0)
		{
			r = n % 10;
			n = n / 10;
			if (i == 0 && n % 10 != 1)
			{
				if (r == 1)
					strcpy(str1, "one");
				else if (r == 2)
					strcpy(str1, "two");
				else if (r == 3)
					strcpy(str1, "three");
				else if (r == 4)
					strcpy(str1, "four");
				else if (r == 5)
					strcpy(str1, "five");
				else if (r == 6)
					strcpy(str1, "six");
				else if (r == 7)
					strcpy(str1, "seven");
				else if (r == 8)
					strcpy(str1, "eight");
				if (r == 9)
					strcpy(str1, "nine");
			}
			if (i == 1)
			{
				if (r == 1)
				{
					if (p % 10 == 0)
						strcpy(str2, "ten");
					else if (p % 10 == 1)
						strcpy(str2, "eleven");
					else if (p % 10 == 2)
						strcpy(str2, "twelve");
					else if (p % 10 == 3)
						strcpy(str2, "thirteen");
					else if (p % 10 == 4)
						strcpy(str2, "fourteen");
					else if (p % 10 == 5)
						strcpy(str2, "fifteen");
					else if (p % 10 == 6)
						strcpy(str2, "sixteen");
					else if (p % 10 == 7)
						strcpy(str2, "seventeen");
					else if (p % 10 == 8)
						strcpy(str2, "eighteen");
					else if (p % 10 == 9)
						strcpy(str2, "nineteen");
				}
				else if (r == 2)
					strcpy(str2, "twenty ");
				else if (r == 3)
					strcpy(str2, "thirty ");
				else if (r == 4)
					strcpy(str2, "fourty ");
				else if (r == 5)
					strcpy(str2, "fifty ");
				else if (r == 6)
					strcpy(str2, "sixty ");
				else if (r == 7)
					strcpy(str2, "seventy ");
				else if (r == 8)
					strcpy(str2, "eighty ");
				if (r == 9)
					strcpy(str2, "ninty ");
			}
			if (i == 2)
			{
				if (r == 1)
					strcpy(str3, "one hundred ");
				else if (r == 2)
					strcpy(str3, "two hundred ");
				else if (r == 3)
					strcpy(str3, "three hundred ");
				else if (r == 4)
					strcpy(str3, "four hundred ");
				else if (r == 5)
					strcpy(str3, "five hundred ");
				else if (r == 6)
					strcpy(str3, "six hundred ");
				else if (r == 7)
					strcpy(str3, "seven hundred ");
				else if (r == 8)
					strcpy(str3, "eight hundred ");
				if (r == 9)
					strcpy(str3, "nine hundred ");
			}
			if (i == 3)
			{
				if (r == 0)
					strcpy(str4, "thousand ");
				else if (r == 1)
					strcpy(str4, "one thousand ");
				else if (r == 2)
					strcpy(str4, "two thousand ");
				else if (r == 3)
					strcpy(str4, "three thousand ");
				else if (r == 4)
					strcpy(str4, "four thousand ");
				else if (r == 5)
					strcpy(str4, "five thousand ");
				else if (r == 6)
					strcpy(str4, "six thousand ");
				else if (r == 7)
					strcpy(str4, "seven thousand ");
				else if (r == 8)
					strcpy(str4, "eight thousand ");
				if (r == 9)
					strcpy(str4, "nine thousand ");
			}
			if (i == 4)
			{
				if (r == 1)
					strcpy(str5, "ten ");

				else if (r == 2)
					strcpy(str5, "twenty ");
				else if (r == 3)
					strcpy(str5, "thirty ");
				else if (r == 4)
					strcpy(str5, "fourty ");
				else if (r == 5)
					strcpy(str5, "fifty ");
				else if (r == 6)
					strcpy(str5, "sixty ");
				else if (r == 7)
					strcpy(str5, "seventy ");
				else if (r == 8)
					strcpy(str5, "eighty ");
				if (r == 9)
					strcpy(str5, "ninty ");
			}
			if (i == 5)
			{
				if (r == 0)
					strcpy(str6, "lakh ");
				else if (r == 1)
					strcpy(str6, "one lakh ");
				else if (r == 2)
					strcpy(str6, "two lakh ");
				else if (r == 3)
					strcpy(str6, "three lakh ");
				else if (r == 4)
					strcpy(str6, "four lakh ");
				else if (r == 5)
					strcpy(str6, "five lakh ");
				else if (r == 6)
					strcpy(str6, "six lakh ");
				else if (r == 7)
					strcpy(str6, "seven lakh ");
				else if (r == 8)
					strcpy(str6, "eight lakh ");
				if (r == 9)
					strcpy(str6, "nine lakh ");
			}
			if (i == 6)
			{
				if (r == 1)
					strcpy(str7, "ten ");

				else if (r == 2)
					strcpy(str7, "twenty ");
				else if (r == 3)
					strcpy(str7, "thirty ");
				else if (r == 4)
					strcpy(str7, "fourty ");
				else if (r == 5)
					strcpy(str7, "fifty ");
				else if (r == 6)
					strcpy(str7, "sixty ");
				else if (r == 7)
					strcpy(str7, "seventy ");
				else if (r == 8)
					strcpy(str7, "eighty ");
				if (r == 9)
					strcpy(str7, "ninty ");
			}
			if (i == 7)
			{
				if (r == 0)
					strcpy(str8, "crore ");
				else if (r == 1)
					strcpy(str8, "one crore ");
				else if (r == 2)
					strcpy(str8, "two crore ");
				else if (r == 3)
					strcpy(str8, "three crore ");
				else if (r == 4)
					strcpy(str8, "four crore ");
				else if (r == 5)
					strcpy(str8, "five crore ");
				else if (r == 6)
					strcpy(str8, "six crore ");
				else if (r == 7)
					strcpy(str8, "seven crore ");
				else if (r == 8)
					strcpy(str8, "eight crore ");
				if (r == 9)
					strcpy(str8, "nine crore ");
			}

			if (i == 8)
			{
				if (r == 1)
					strcpy(str9, "ten ");

				else if (r == 2)
					strcpy(str9, "twenty ");
				else if (r == 3)
					strcpy(str9, "thirty ");
				else if (r == 4)
					strcpy(str9, "fourty ");
				else if (r == 5)
					strcpy(str9, "fifty ");
				else if (r == 6)
					strcpy(str9, "sixty ");
				else if (r == 7)
					strcpy(str9, "seventy ");
				else if (r == 8)
					strcpy(str9, "eighty ");
				if (r == 9)
					strcpy(str9, "ninty ");
			}

			i++;
		}
		if (str9[0] != '\0')
		{
			strcat(str9, str8);
			strcat(str9, str7);
			strcat(str9, str6);
			strcat(str9, str5);
			strcat(str9, str4);
			strcat(str9, str3);
			strcat(str9, str2);
			strcat(str9, str1);
			printf("\n\n%s", str9);
		}
		else if (str9[0] == '\0')
		{
			strcat(str8, str7);
			strcat(str8, str6);
			strcat(str8, str5);
			strcat(str8, str4);
			strcat(str8, str3);
			strcat(str8, str2);
			strcat(str8, str1);
			printf("\n\n%s", str8);
		}

		else if (str8[0] == '\0')
		{
			strcat(str7, str6);
			strcat(str7, str5);
			strcat(str7, str4);
			strcat(str7, str3);
			strcat(str7, str2);
			strcat(str7, str1);
			printf("\n\n%s", str7);
		}

		else if (str7[0] == '\0')
		{
			strcat(str6, str5);
			strcat(str6, str4);
			strcat(str6, str3);
			strcat(str6, str2);
			strcat(str6, str1);
			printf("\n\n%s", str6);
		}

		else if (str6[0] == '\0')
		{
			strcat(str5, str4);
			strcat(str5, str3);
			strcat(str5, str2);
			strcat(str5, str1);
			printf("\n\n%s", str5);
		}
		else if (str5[0] == '\0')
		{
			strcat(str4, str3);
			strcat(str4, str2);
			strcat(str4, str1);
			printf("\n\n%s", str4);
		}
		else if (str4[0] == '\0')
		{
			strcat(str3, str2);
			strcat(str3, str1);
			printf("\n\n%s", str3);
		}
		else if (str3[0] == '\0')
		{
			strcat(str2, str1);
			printf("\n\n%s", str2);
		}
		else
			printf("\n\n%s", str1);

		memset(str1, '\0', 500);
		memset(str2, '\0', 500);
		memset(str3, '\0', 500);
		memset(str4, '\0', 500);
		memset(str5, '\0', 500);
		memset(str6, '\0', 500);
		memset(str7, '\0', 500);
		memset(str8, '\0', 500);
		memset(str9, '\0', 500);
		/* above I have assign NULL character to every shell of array via memset() function. so it lost all the previous value holded in variable of string and ready with a empty string in next iteration of do while loop*/

		printf("\n\n press y or j for continue or any other key to exit:  ");
		scanf(" %c", &cont);

	} while (cont == 'y' || cont == 'j');
	printf("\nThanking You");
	return 0;
}
/*
author- suraj kumar giri
date- compleated on 2nd may 2021. Started on 1st may
purpose- work provide by anand sir

*/