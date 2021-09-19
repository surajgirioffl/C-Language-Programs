#include <stdio.h>
#include <math.h>
void dis(int p, int q, int r);
void roots(int *x, *y, float *z);
int main()
{
	int a[3];
	float b;
	printf("\nwrite the value of a, b and c respectively: ");
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	dis(a[0],a[1], a[2]);
}

void dis(int p, int q, int r)
{
	float a;
	a = sqrt((q * q) - (4 * p * r));
	roots(&p, &q, &a);
}
void roots(int *x, *y, float *z)
{
	float a, b;
	a = (-(*y) + (*z)) / (2 * (*x));
	b = (-(*y) - (*z)) / (2 * (*x));

	printf("\nroot of quadratic equation are:\nroot a=%f\nroot b=%f", a, b);
}