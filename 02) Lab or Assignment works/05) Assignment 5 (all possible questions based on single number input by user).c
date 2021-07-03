//c language
/*02) Lab or Assignment work> */
/*04) Assignment 5.c*/
//101
//Assignment 4
//done
#include <stdio.h>
#include <conio.h>
#include <math.h>
void numbers(int p);
void sum(int p, int q);
void subtract(int p, int q);
void multiply(int p, int q);
void divide(int p, int q);
void npr(int p, int q);
void ncr(int p, int q);
void hcf(int p, int q);
void lcm(int p, int q);
void power(int p, int q);
void greater(int p, int q);
void even_odd(int p, int q);
void prime(int p, int q);
int factorial(int n);
int main()
{
	int n;
	char ch[4];
	do
	{
		puts("01. To Find sum of two given numbers");
		puts("02. To Find subtraction two given numbers");
		puts("03. To Find multiply of two given numbers");
		puts("04. To Find division two given numbers");
		puts("05. To Find npr");
		puts("06. To Find ncr");
		puts("07. To Find HCF of two given numbers");
		puts("08. To Find LCM of two given numbers");
		puts("09. To Find a to the power b");
		puts("10. To Find which one is greater");
		puts("11. To Find and Count odd and even numbers between two given numbers");
		puts("12. To Find and count prime and composite numbers between two given number");

		puts("\nWrite your choice:");
		scanf("%d", &n);
		numbers(n);
		/*After complete execution of whole command the control 
	    regain by main. so here if we do anything that will said to 
	    be done in last part of whole program and get executed in last.
	    */
		//last part of whole program(i.e it will get executed in last)

		puts("\n\nDo you want to restart the whole program. yes or no");
		puts("Please write your choice:");
		scanf("%s", ch);
	} while (ch[0] == 'y' || ch[0] == 'Y');
	printf("\033[1;33m");
	puts("\n\t\tThanking You. Bye Bye........");
	return 0;
}
void numbers(int p)
{
	puts("\n\t\t\t****WELCOME****\n");
	int a, b;
	printf("write the 1st number:\n");
	scanf("%d", &a);
	printf("write the 2nd number:\n");
	scanf("%d", &b);
	switch (p)
	{
	case 1:
		sum(a, b);
		break;

	case 2:
		subtract(a, b);
		break;

	case 3:
		multiply(a, b);
		break;

	case 4:
		divide(a, b);
		break;

	case 5:
		npr(a, b);
		break;

	case 6:
		ncr(a, b);
		break;

	case 7:
		hcf(a, b);
		break;

	case 8:
		lcm(a, b);
		break;

	case 9:
		power(a, b);
		break;

	case 10:
		greater(a, b);
		break;

	case 11:
		even_odd(a, b);
		break;

	case 12:
		prime(a, b);
		break;

	default:
		printf("\nYou have selected wrong choice. Please reselect correct one\n");
		main(); /*calling main to reinput the value. but main is called funtion
		                 here so. In complete execution control again come to numbers() 
		                 and in last the whole control regain by main() as initiated.                
		                */
	}
}

void sum(int p, int q)
{
	printf("\nThe sum of %d and %d is %d", p, q, p + q);
}

void subtract(int p, int q)
{
	printf("\nThe subtraction of %d from %d is %d", q, p, p - q);
	printf("\nThe subtraction of %d from %d is %d", p, q, q - p);
}

void multiply(int p, int q)
{
	printf("\nThe Multiplication of %d and %d is %d", p, q, p * q);
}

void divide(int p, int q)
{
	printf("The quotient by diving %d by %d is %f\n", p, q, ((float)p / (float)q));
	printf("The quotient by diving %d by %d is %f", q, p, ((float)q / (float)p));
}
void npr(int p, int q)
{
	int n, r;
	n = factorial(p);
	r = factorial(p - q);
	printf("\nnpr of n=%d and r=%d is %f", p, q, (float)n / (float)r);
}

void ncr(int p, int q)
{
	int n, m, r;
	n = factorial(p);
	m = factorial(q);
	r = factorial(p - q);
	printf("\nncr of n=%d and r=%d is %f", p, q, ((float)n / ((float)m * (float)r)));
}

void hcf(int p, int q)
{
	int smaller;
	if (p < q)
		smaller = p;
	else
		smaller = q;
	while (smaller > 1)
	{
		if (p % smaller == 0 && q % smaller == 0)
			break;
		smaller--;
	}
	printf("\n%d is the HCF of %d and %d", smaller, p, q);
}

void lcm(int p, int q)
{
	int greater1;
	if (p > q)
		greater1 = p;
	else
		greater1 = q;
	for (int i = 1; i > 0; i++)
	{
		if (greater1 % p == 0 && greater1 % q == 0)
			break;
		greater1 = greater1 * i;
	}
	printf("\nLCM of %d and %d is %d", p, q, greater1);
}
void power(int p, int q)
{
	printf("\npower of %d to %d is %f", q, p, pow((float)p, (float)q));
	printf("\npower of %d to %d is %f", p, q, pow((float)q, (float)p));
}
void greater(int p, int q)
{
	int greater1;
	if (p > q)
		greater1 = p;
	else
		greater1 = q;
	printf("\n%d is greater in %d and %d", greater1, p, q);
}
void even_odd(int p, int q)
{
	int greater1;
	int smaller;
	if (p > q)
	{
		greater1 = p;
		smaller = q;
	}
	else
	{
		greater1 = q;
		smaller = p;
	}
	int i, j, even[greater1 - smaller], odd[greater1 - smaller];
	int count1 = 0, count2 = 0;
	i = 0;
	j = 0;
	smaller = smaller + 1; //because we have to find no.s b/w them, not them
	while (smaller < greater1)
	{
		if (smaller % 2 == 0)
		{
			even[i] = smaller;
			count1 = count1 + 1;
			i++;
		}
		else
		{
			odd[j] = smaller;
			count2 = count2 + 1;
			j++;
		}
		smaller++;
	}
	printf("\nEven Numbers Between %d and %d are following:-\n", p, q);
	for (i = 0; i < count1; i++)
		printf("%02d\t", even[i]);
	printf("\n\nTotal number of even numbers are %d", count1);

	printf("\n\nOdd Numbers Between %d and %d are following:-\n", p, q);
	for (i = 0; i < count2; i++)
		printf("%02d\t", odd[i]);
	printf("\n\nTotal number of even numbers are %d", count2);
}
void prime(int p, int q)
{
	int greater1;
	int smaller;
	if (p > q)
	{
		greater1 = p;
		smaller = q;
	}
	else
	{
		greater1 = q;
		smaller = p;
	}
	int i = 0, j = 0, prime[greater1 - smaller], composite[greater1 - smaller];
	int count1 = 0, count2 = 0;
	smaller = smaller + 1;
	int k, check;
	while (smaller < greater1)
	{
		check = 0;
		for (k = 2; k < smaller; k++)
		{
			if (smaller % k == 0)
				check = check + 1;
		}
		if (check != 0)
		{
			count1 = count1 + 1; //for composite
			composite[i] = smaller;
			i++;
		}
		else
		{
			count2 = count2 + 1;
			prime[j] = smaller;
			j++;
		}
		smaller++;
	}
	printf("\nComposite Numbers Between %d and %d are following:-\n", p, q);
	for (i = 0; i < count1; i++)
		printf("%02d\t", composite[i]);
	printf("\n\nTotal number of composite numbers are %d", count1);

	printf("\n\nPrime Numbers Between %d and %d are following:-\n", p, q);
	for (i = 0; i < count2; i++)
		printf("%02d\t", prime[i]);
	printf("\n\nTotal number of prime numbers are %d", count2);
}

int factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return (n * (factorial(n - 1))); //recursion
}

/*
author- suraj kumar giri
date of completion- 13th June 2021
purpose- assignment work provided by Anand sir
*/
