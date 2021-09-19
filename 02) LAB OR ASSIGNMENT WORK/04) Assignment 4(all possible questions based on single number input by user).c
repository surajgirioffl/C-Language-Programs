//c language
/*02) Lab or Assignment work> */
/*04) Assignment 4.c*/
//100
//asignment 4
//Done
#include <stdio.h>
#include <conio.h>
#include <math.h>
int number();
void even_odd(int a);
void to_check(int a);
void sum_digit(int a);
void inverse(int a);
void palindrome(int a);
void armstrong(int a);
void factorial(int a);
void fibonacci(int a);
void table(int a);
void prime(int a);
void div_6(int a);
void perfect(int a);
void root(int a);
void factor(int a);
void sq_cu(int a);
void series(int a);
void shape1(int b);
void shape2(int b);
void shape3(int b);
void shape4(int b);
int main()
{
	int n, num;
	char ch[4];
	do
	{
	again:
		puts("01. To check the entered number is odd or even");
		puts("02. To check the entered number is positive, negative or neither negative nor positive");
		puts("03. To find sum of digits of entered number");
		puts("04. To find inverse of enterd number");
		puts("05. To check the entered number is palindrome or not");
		puts("06. To check the entered number is Armstrong or not");
		puts("07. To find factorial of entered number");
		puts("08. To find Fibonacci series up to enterd number");
		puts("09. To find the table of given number and find it's sum");
		puts("10. To check given number is prime or not");
		puts("11. To check given number is divisible by 6 or not");
		puts("12. To check given number is perfect or not");
		puts("13. To find the squre root of given number");
		puts("14. To find factors of given number");
		puts("15. To find squre and cube of given number");
		puts("16. To Generate Series up to entered number times\n");
		puts("Now, write your choice:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			num = number();
			even_odd(num);
			break;

		case 2:
			num = number();
			to_check(num);
			break;

		case 3:
			num = number();
			sum_digit(num);
			break;

		case 4:
			num = number();
			inverse(num);
			break;

		case 5:
			num = number();
			palindrome(num);
			break;

		case 6:
			num = number();
			armstrong(num);
			break;

		case 7:
			num = number();
			factorial(num);
			break;

		case 8:
			num = number();
			fibonacci(num);
			break;

		case 9:
			num = number();
			table(num);
			break;

		case 10:
			num = number();
			prime(num);
			break;

		case 11:
			num = number();
			div_6(num);
			break;

		case 12:
			num = number();
			perfect(num);
			break;

		case 13:
			num = number();
			root(num);
			break;

		case 14:
			num = number();
			factor(num);
			break;

		case 15:
			num = number();
			sq_cu(num);
			break;

		case 16:
			num = number();
			series(num);
			break;

		default:
			clrscr();
			printf("\nYou have selected wrong choice. Please select correct one:\n");
			goto again;
		}
		puts("\n\nDo you want to restart the program: yes or no");
		printf("write your choice:");
		scanf("%s", ch);
	} while (ch[0] == 'y' || ch[0] == 'Y');
	printf("\nThanking You. Bye Bye....");

	return 0;
}

//0
int number()
{
	int a;
	puts("write the number:");
	scanf("%d", &a);
	return a;
}

//1
void even_odd(int a)
{
	if (a == 0)
		printf("\n0 even when divided by 2 and odd when divide by other than 2");
	else if (a % 2 == 0)
		printf("\n%d is an even number", a);
	else if (a % 2 != 0)
		printf("\n%d is an odd number", a);
}
//2
void to_check(int a)
{
	if (a > 0)
		printf("\n%d is positive number", a);
	else if (a == 0)
		printf("\n%d is neither positive nor negative", a);
	else
		printf("\n%d is negative number", a);
}
//3
void sum_digit(int a)
{
	int sum = 0;
	int r, z;
	z = a;
	for (int i = 0; a > 0; i++)
	{
		r = a % 10;
		sum = sum + r;
		a = a / 10;
	}
	printf("\nsum of digits of number %d is %d", z, sum);
}
//4
void inverse(int a)
{
	printf("\n");
	int r;
	int z;
	z = a;
	for (int i = 0; a > 0; i++)
	{
		r = a % 10;
		printf("%d", r);
		a = a / 10;
	}
	printf(" is the reverse of %d", z);
}
//5
void palindrome(int a)
{
	int r, z, check = 0;
	int sum = 0;
	z = a;
	for (int i = 0; a > 0; i++)
	{
		r = a % 10;
		sum = sum + r;
		check = (check * 10) + r;
		a = a / 10;
	}
	if (check == z)
		printf("\n%d is a Palindrome Number with sum of digits equal to %d", z, sum);
	else
		printf("\n%d is not a Palindrome Number", z);
}
//6
void armstrong(int a)
{
	int arm = 0, num_digit;
	int r, i;
	int z;
	z = a;
	for (i = 0; a > 0; i++)
	{
		r = a % 10;
		a = a / 10;
	}
	//a get lost till here. so we refill the a.
	a = z;
	num_digit = i; //i ka value increse hone ke bad condition check karega. so we don't use i+1;
	for (i = 0; a > 0; i++)
	{
		r = a % 10;
		arm = arm + pow(r, num_digit);
		a = a / 10;
	}
	if (arm == z)
		printf("\n%d is an Armstrong Number", z);
	else
		printf("\n%d is not an Armstrong Number", z);
}
//7
void factorial(int a)
{
	int fact = 1;
	int z;
	z = a;
	for (int i = 0; a > 1; i++)
	{
		fact = fact * a;
		a--;
	}
	printf("\nFactorial of %d is %d", z, fact);
}
//8
void fibonacci(int a)
{
	printf("\n");
	int p[a];
	p[0] = 0;
	p[1] = 1;
	printf("\n%d %d", p[0], p[1]);
	for (int i = 2; i < a; i++)
	{
		p[i] = p[i - 1] + p[i - 2];
		printf(" %d", p[i]);
	}
}
//9
void table(int a)
{
	printf("\nTable of %d is following", a);
	for (int i = 1; i < 11; i++)
		printf("\n%dx%d=%d", a, i, (a * i));
	printf("\nsum of table of %d is %d", a, (a * 55));
}
//10
void prime(int a)
{
	int i, k = 0;
	if (a == 2)
		printf("\n2 is a prime number");
	else if (a > 2)
	{
		for (i = 2; i <= (int)a / 2; i++)
		{
			if (a % i == 0)

				k = k + 1;
		}
		if (k == 0)
			printf("\n%d is a prime number", a);
		else
			printf("\n%d is not a prime number", a);
	}
	else
		printf("%d is not prime number", a);
}
//11
void div_6(int a)
{
	if (a % 6 == 0)
		printf("\n%d is divided by 6", a);
	else
		printf("\n%d is not divided by 6", a);
}
//12
void perfect(int a)
{
	int sum = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
			sum = sum + i;
	}
	if (sum == a)
		printf("\n%d is perfect number", a);
	else
		printf("\n%d is not a perfect number", a);
}
//13
void root(int a)
{
	printf("\n%f is the squre root of %d", sqrt(a), a);
}

//14
void factor(int a)
{
	printf("\nFollwings are the factors of %d\n", a);
	for (int i = 1; i < a + 1; i++)
	{
		if (a % i == 0)
			printf(" %d ", i);
	}
}

//15
void sq_cu(int a)
{
	printf("\n%f is the squre of %d\n%f is the cube of %d", pow((float)a, 2), a, pow((float)a, 3), a);
}

//16
void series(int a)
{
	int n;
again1:
	puts("01. Left sided ladder with * shapes");
	puts("02. Right sided laddr with * shapes");
	puts("03. Left Sided Ladder with ABC...");
	puts("04. Squre Using * shapes");
	puts("\nPlease write your choice:");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		shape1(a);
		break;

	case 2:
		shape2(a);
		break;

	case 3:
		shape3(a);
		break;

	case 4:
		shape4(a);
		break;

	default:
		clrscr();
		printf("\nyou have selected wrong choice. Please reselect correct one");
		goto again1;
		break;
	}
}
void shape1(int b)
{
	puts("\nRequire Pattern Is Following.\n");
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j <= i; j++)
			printf(" * ");
		printf("\n");
	}
}

void shape2(int b)
{
	puts("\nRequire Pattern Is Following.\n");
	for (int i = 1; i <= b; i++)
	{
		for (int j = 0; j <= b - i; j++)
			printf("  ");
		for (int j = 0; j < i; j++)
			printf(" *");
		printf("\n");
	}
}

void shape3(int b)
{
	puts("\nRequire Pattern Is Following.\n");
	for (int i = 0; i < b; i++)
	{
		for (int j = 65; j <= (65 + i); j++)
		{
			printf(" %c ", j);
		}
		printf("\n");
	}
}

void shape4(int b) //for squre
{
	puts("\nRequire Pattern Is Following.\n");
	for (int i = 0; i < b; i++)
		printf(" *");
	printf("\n");

	for (int i = 0; i < b - 2; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (j == 0)
				printf(" *");
			else if (j == b - 1)
				printf(" *");
			else
				printf("  ");
		}
		printf("\n");
	}

	for (int i = 0; i < b; i++)
		printf(" *");
}

/*
author- suraj kumar giri
date of completion- 13th June 2021
purpose- assignment work provided by Anand sir
*/