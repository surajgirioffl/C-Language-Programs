//c language
/*1) Programs> 3) Loop> 1) while loop> 4) Reverse of digits and Palindrome*/
/*1) To find reverse, sum, multiplication of digits and to check given number is palindrome or not using while loop*/
//26
/*PROGRAM TO SHOW INVERSE,SUM OF DIGITS,PALLINDROME OR NOT OF GIVEN NUMBER. AND WHICH AND HOW MANY NUMBER IS PALINDROME BETWEEN GIVEN TWO NUMBERS.*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, m, r, k, mt = 1, s = 0, nn, x, y, i, mm, kk, rr, z = 0;
	printf("write any number to check i,e palindrome or not and its reverse with sum of digits:   ");
	scanf("%d", &n);
	m = n;
	k = 0;

	while (n > 0)
	{
		r = n % 10;
		k = k * 10 + r;
		n = n / 10;

		printf(" %d", r);
		s = s + r;
		mt = mt * r;
	}
	printf("\nSum of digits = %d", s);
	printf("\n Multiplication of digits =%d", mt);

	if (m == k)
	{
		printf("\nGiven number %d is palindrome\n\n", m);
	}
	else
	{
		printf("\nGiven number %d is not palindrome\n\n", m);
	}

	printf("\nwrite the initial number from which you want to see palindrome number: ");
	scanf("%d", &x);
	printf("\nwrite the final number to which you want to see palindrome number: ");
	scanf("%d", &y);

	i = 0;
	nn = 0;

	while (i < (y - x) + 1)
	{
		nn = x + i;
		i++;
		//printf("\n%d",nn);
		mm = nn;
		kk = 0;
		while (nn > 0)
		{
			rr = nn % 10;
			kk = kk * 10 + rr;
			nn = nn / 10;

			if (mm == kk)
			{
				printf("\n\n%d is palindrome", mm);
				mm = 1;
				z = z + mm;
			}
			else
			{
			}
		}
	}

	printf("\n\n Total number of palindromes between %d and %d is %d", x, y, z);

	printf("\n\n\nTHIS PROGRAM IS MADE BY SURAJ KUMAR GIRI JI");
	return 0;
	getch();
}