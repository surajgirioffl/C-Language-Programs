// c language
/* #1) All In One C Programs (mixture of any of concepts of C) */
/* 09) To find the smallest number and greatest number in the n number enters by user */
//108
/* Q. To find the smallest number and greatest number in the n number enters by user */

#include <stdio.h>
void smallest(int num[100], int n1);
int main()
{
	int a[100], n, i;
	printf("How many numbers you want to enter to check greatest and smallest: \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("write number %d: \n", i + 1);
		scanf("%d", &a[i]);
	}
	smallest(a, n);

	for (i = 0; i < n; i++)
	{
		if (a[0] < a[i])
			a[0] = a[i];
	}

	printf("\n%d is greatest", a[0]);
	return 0;
}

void smallest(int num[100], int n1)
{
	int i;
	for (i = 0; i < n1; i++)
	{
		if (num[0] > num[i]) //har baar bara hone per condition satisfy ho jayega and choota wala value se replace ho jayega.
			num[0] = num[i];
	}

	printf("\n%d is smallest", num[0]);
}