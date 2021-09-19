//c language
/*2) Lab or Assignment work> 2) Lab 2 or Assignment 2 work*/
/*1) Lab 2 work or Assignment 2 work*/
//78
//Assignment 2
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, a[50], b, i, s, k, q, p, z, j;
	char ch;
	clrscr();

	do
	{
		printf("1 - For sum of all the number");
		printf("\n2 - For sum of even number and odd number");
		printf("\n3 - For count of even number and odd number");
		printf("\n4 - For count of prime number and composite number");
		printf("\n5 - For sum of prime number");
		printf("\n6 - For sum of negative number and positive number and neither negative nor positive number");
		printf("\n7 - For count positive number, negative numbere and neither negative nor positive");
		printf("\n8 - For sum of odd index number");
		printf("\n9 - For sum of first and last number");
		printf("\n10 - For reverse of 10 given number");
		printf("\n11 - For check pallindrome in 10 given number");

		printf("\n\nwrite your choice: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("\nwrite the numbers of number you want to add: ");
			scanf("%d", &b);
			s = 0;
			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				s = s + a[i];
			}
			printf("\nsum is %d", s);
			break;

		case 2:
			printf("\nwrite the numbers of number you want to add: ");
			scanf("%d", &b);
			s = 0;
			k = 0;
			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				if (a[i] % 2 == 0)
				{
					s = s + a[i];
				}
				else
				{
					k = k + a[i];
				}
			}
			printf("\nsum of even numbers are %d", s);
			printf("\nsum of odd numbers are %d", k);
			break;
		case 3:

			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;
			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				if (a[i] % 2 == 0)
				{
					s = s + 1;
				}
				else
				{
					k = k + 1;
				}
			}
			printf("\nTotal number of even number is %d", s);
			printf("\nTotal number of odd number is %d", k);
			break;
		case 4:

			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				for (j = 2; j < a[i]; j++)
				{
					z = 0;
					if (a[i] % j == 0 && a[i] > 3)
					{
						s = s + 1;
						z = z + 1; //it will used to find number of prime numbers
						break;
					}
				}
				if (z == 0 && a[i] > 1)
				{
					k = k + 1;
				}
			}

			printf("\nNumber of prime numbers are %d", k);
			printf("\nNumber of composite numbers are %d", s);
			break;

		case 5: //sum of prime and composite number
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				for (j = 2; j < a[i]; j++)
				{
					z = 0;
					if (a[i] % j == 0 && a[i] > 3)
					{
						s = s + a[i];
						z = z + 1; //it will used to find number of prime numbers
						break;
					}
				}
				if (z == 0 && a[i] > 1)
				{
					k = k + a[i];
				}
			}

			printf("\nSum of prime numbers are %d", k);
			printf("\nSum of composite numbers are %d", s);
			break;

		case 6:
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				if (a[i] > 0)
					s = s + a[i]; //single line program doesn't need any brackets to open and close. If programs goes in 2nd line then you have to open and close the middle brackets.
				else
					k = k + a[i];
			}
			printf("\nsum of positive integers are %d", s);
			printf("\nsum of negative integers are %d", k);
			break;

		case 7: //count of positive number, negative number and neither negative nor positve number
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			z = 0;
			for (i = 1; i <= b; i++)
			{
				if (a[i] > 0)
					s = s + 1; //single line program doesn't need any brackets to open and close. If programs goes in 2nd line then you have to open and close the middle brackets.
				else
					k = k + 1;

				if (a[i] == 0)
					z = z + 1;
			}
			printf("\nNumbers of positive integers are %d", s);
			printf("\nNumbers of negative integers are %d", k);
			printf("\nNumbers of zeros are %d", z);
			break;

		case 8:
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = 1; i <= b; i++)
			{
				if ((i - 1) % 2 == 0)
					s = s + a[i];
				else
					k = k + a[i];
			}
			printf("\nSum of even index numbers are %d", s);
			printf("\nSum of odd index numbers are %d", k);
			break;

		case 9: //find the sum of 1st and last number
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			printf("\nsum of 1st and last numbers are %d", a[1] + a[b]);
			break;

		case 10:
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}
			for (i = b; i > 0; i--)
			{
				printf("\n%d", a[i]);
			}
			break;

		case 11:
			printf("\nwrite the numbers of number you want to use: ");
			scanf("%d", &b);
			s = 0;
			k = 0;

			for (i = 1; i <= b; i++)
			{
				printf("\nwrite the number: ");
				scanf("%d", &a[i]);
			}

			for (i = 1; i <= b; i++)
			{
				z = a[i];
				for (q = 0; a[i] > 0;)
				{
					p = a[i] % 10;
					q = (q * 10) + p;
					a[i] = a[i] / 10;
				}
				if (q == z)
				{
					printf("\n%d is a pallindrome", z);
					s = s + z;
				}
			}
			printf("\n\nSum of all Pallindrome numbers is %d", s);
			break;

		default:
			printf("\nwrong choice selected. Please select the correct choice");
		}

		printf("\nDo you want to continue. Select your choice y/n:  ");
		scanf(" %c", &ch);
	} while (ch == 'y');

	if (ch == 'n')
	{
		printf("\n\nThanking You");
		printf("\n\n*******THIS PROGRAM IS WRITTEN BY SURAJ KUMAR GIRI*******");
	}

	if (ch != 'y' && ch != 'n')
		printf("\nwrong choise selected. Please select correct choise");
	return 0;
	getch();
}