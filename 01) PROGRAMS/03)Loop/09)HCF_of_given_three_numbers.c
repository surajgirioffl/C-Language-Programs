//c language
/*1) Programs> 3) Loop> 2) Any Loop> 1) HCF*/
/*1) To find HCF of three number using loop*/
//29
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, p, k, i;
	printf("write the 1st number: ");
	scanf("%d", &a);
	printf("\nwrite the 2nd number: ");
	scanf("%d", &b);
	printf("\nwrite the 3rd number: ");
	scanf("%d", &c);

	if (a < b)
	{
		if (a < c)
		{
			p = a;
		}
	}
	else
	{
		if (b < c)
		{
			p = b;
		}
		else
		{
			p = c;
		}
	}
	//	printf("\nsmallest number is %d",p);

	if (a % p == 0 && b % p == 0 && c % p == 0)
	{
		printf("\nHCF of given number are %d", p);
	}
	else
	{
		i = 1;

		while (i < p) // while (k<p && k>0). i ke case me hum i>0 nahi liye hai kyoki i=1(initiated before) se start hi hoga aur p se pahle stop ho jayega but k ko sirf agar less than p wala condtion dale to k ka value 0,-1,-2 etc sab me chala jayega. isliye ham sath k>0 bhi difine karte hain. agar hum k ko pahle hi initiate kar diye (no use) to bhi kuch nahi hoga kyoki wo LHS mein hain isliye RHS ke variable ke value process hote hi wo lost ho jayega. aur is prakar lost hote hote 0,-1,-2 etc per pahuch jayega. aur int/0 aane ke karan floating point error dikhayega console per.
		{
			k = p - i;
			//yaha agar hum lhs me p use karte to overall p ka value har bar chahge ho jata. aur next time rhs ke p me p ka naya value aa jata. isse p ka jo value hame 1-1 subtract karke check karna hai. wo nahi hoga. p ka value 1 se jyada se ghat jayega. Means humko p ka value RHS mein fix rakhna hai tabhi na 1-1 karke uspme se ghatega.
			i++;
			if (a % k == 0)
			{
				if (b % k == 0)
				{
					if (c % k == 0)
					{
						printf("\n 😎%d is the HCF of given three numbers %d,%d and %d", k, a, b, c);
						exit(0);
					}
				}
			}
		}
	}

	return 0;
	getch();
}