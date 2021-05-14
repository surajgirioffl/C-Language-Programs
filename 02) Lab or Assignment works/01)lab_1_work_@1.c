//c language
/*2) Lab or Assignment work> 1) Lab 1 or Assignment 1 work*/
/*1) Lab 1 work or Assignment 1 work*/
//77
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a, b, g, i, k, c, d, e, f, h, j, l, m, n, sur;
	float ab, cd, ef, gh, jk;
	char o, su[10];
	clrscr();
	do
	{
		printf("\nSelect one of the following option. \n1 - Arithmatic operations  \n2 - Summation of all digits  \n3 - Find the reverse of given number \n4 - To check given number is pallandrom or not  \n5 - To check given number is armstrom or not \n6 - To find the factorial of given number \n7 - To find npr  \n8 - To find ncr  \n9 - To find roots of quadratic equation  \n10 - To check given number is prime or not");
		printf("\n\n write your choice:  ");
		scanf("%d", &c);

		switch (c)
		{
		case 1:

			//#1. Arithmatic operation
			printf("\nselect the operator you want. \na - add \nb - subtract \nc - multiply  \nd - divide  \ne - LCM \nf - HCF");
			printf("\n write your selected operator: ");
			scanf(" %c", &o); //o for operator
			// a is 1st number, b is 2nd number
			printf("write the 1st number: ");
			scanf("%d", &a);
			printf("\nwrite the 2nd number: ");
			scanf("%d", &b);
			if (a > b)
			{
				g = a;
				d = b;
			}
			else
			{
				g = b; // g is greater number among a and b. It will used LCM.
				d = a; // d is smallest number among a and b. It will used in HCF.
			}

			switch (o)
			{
			case 'a':

				printf("\nSum of %d and %d is %d", a, b, a + b);
				break;

			case 'b':

				printf("\nSubtraction of %d from %d is %d", b, a, a - b);
				break;

			case 'c':

				printf("\nMultiplication of %d and %d is %d", a, b, a * b);
				break;

			case 'd':

				printf("\nQuotient after division of %d by %d is %d", a, b, a / b);
				break;

			case 'e':

				i = 0;
				while (i >= 0)
				{
					k = g + i;
					i++;
					if (k % a == 0)
					{
						if (k % b == 0)
						{
							printf("\n LCM of %d and %d is %d", a, b, k);
							exit(0);
						}
					}
				}

			case 'f':
				i = 0;
				while (i < d)
				{
					e = d - i;
					i++;
					if (a % e == 0 && b % e == 0)
					{
						printf("\nHCF of %d and %d is %d", a, b, e);
						exit(0);
					}
				}

			default:
				printf("\nwrong choice");
				exit(0);
			}
			break;

		case 2:
			//summation of all digits
			printf("\nwrite the number: ");
			scanf("%d", &f);
			j = 0;
			l = f;
			while (f > 0)
			{
				h = f % 10;
				f = f / 10;
				j = j + h;
			}
			printf("\nsummation of digits of %d is %d", l, j);
			break;

		case 3:
			//reverse of given number
			printf("\nwrite the number: ");
			scanf("%d", &f);
			j = 0;
			while (f > 0)
			{
				h = f % 10;
				f = f / 10;
				printf("\t\n%d", h);
			}
			break;

		case 4:
			//to check pallindrom
			printf("\nwrite the number: ");
			scanf("%d", &f);

			k = 0;
			l = f;
			while (f > 0)
			{
				h = f % 10;
				k = k * 10 + h;
				f = f / 10;
			}
			if (k == l)
			{
				printf("\nGiven number %d is a Pallindrome");
			}
			else
			{
				printf("\nGiven number %d is not a Pallindrome");
			}
			break;

		case 5:
			//To check given number is armstrom or not
			printf("\nwrite the number: ");
			scanf("%d", &f);
			j = 0;
			l = f;
			while (f > 0)
			{
				h = f % 10;
				f = f / 10;
				j = j + (h * h * h);
			}
			if (j == l)
			{
				printf("\n%d is Armstrom", l);
			}
			else
			{
				printf("\n%d is not Armstrom", l);
			}
			break;

		case 6:
			//to find the factorial of given number
			printf("\nwrite the number to find its factorial: ");
			scanf("%d", &a);
			i = 0; //intiator
			k = 1; //to avoid garbage value
			b = a; //to store
			while (c > 1)
			{
				c = a - i;
				k = k * c;
				i++;
			}
			printf("Factorial of %d is %d", b, k);
			break;

		case 7:
			//to find npr
			printf("\nTo find npr write the value of n: ");
			scanf("%d", &a);
			printf("\nwrite the value of r: ");
			scanf("%d", &b);
			d = a - b; //for n-r
			i = 0;
			l = 1;
			k = 3; //assume to satisfy the condition
			while (k > 1)
			{
				k = a - i;
				l = l * k;
				i++;
			}

			g = 0;
			e = 1;
			h = 3; //assume to satisfy the condition
			while (h > 1)
			{
				h = d - g;
				e = e * h;
				g++;
			}

			printf("\nnpr=%d ", l / e);
			break;

		case 8:
			//To find ncr
			printf("\nTo find ncr write the value of n: ");
			scanf("%d", &a);
			printf("\nwrite the value of r: ");
			scanf("%d", &b);
			d = a - b; //for n-r
			i = 0;
			l = 1;
			k = 3; //assume to satisfy the condition
			while (k > 1)
			{
				k = a - i;
				l = l * k;
				i++;
			}

			g = 0;
			e = 1;
			h = 3; //assume to satisfy the condition
			while (h > 1)
			{
				h = d - g;
				e = e * h;
				g++;
			}
			j = 0;
			m = 1;
			n = 3;
			while (n > 1)
			{
				n = b - j;
				m = m * n;
				j++;
			}
			printf("\nncr =%d", l / (m * e));
			break;

		case 9:
			//to find roots of quadratic equation
			printf("\nwrite the value of a to find roots of quadratic equation: ");
			scanf("%f", &ab);
			printf("\nWrite the value of b: ");
			scanf("%f", &cd);
			printf("\nwrire the value of c: ");
			scanf("%f", &ef);

			gh = (-cd + sqrt((cd * cd) - (4 * ab * ef))) / (2 * ab);
			jk = (-cd - sqrt((cd * cd) - (4 * ab * ef))) / (2 * ab);

			printf("\n%f and %f is the roots of given equation", gh, jk);

			break;

		case 10:
			//to check prime or composite
			printf("\nwrite the number to check prime or not as well as composite: ");
			scanf("%d", &n);
			i = 2;
			k = 0;
			if (n == 2)
			{
				printf("\n%d is prime", n);
			}
			else
			{
			}
			if (n < 2)
			{
				printf("\n %d is neither composite nor prime", n);
			}
			else
			{
			}

			while (i < n)
			{
				k = n % i;
				i++;
				if (k == 0)
				{
					printf("\n%d is not prime. So it is a composite number", n);
					break;
				}
			}

			if (k != 0)
			{
				printf("\n %d is prime", n);
			}
			break;

		default:
			printf("\nwrong choice");
		}
		printf("\nPress yes for continue. Press Any key for exit:  ");
		scanf("%s", su);
		sur = strcmp(su, "yes");
	} while (sur == 0);
	if (sur != 0)
		printf("\nThanking You");
	return 0;
	getch();
}
