//c language
//1) Program> 1) simple programs
//3) To find simple interest
//15

#include <stdio.h>
#include <conio.h>
int main()
{
	float p, r, t, si;

	clrscr();
	printf("write the principle: ");
	scanf("%f", &p);
	printf("\nwrite the rate: ");
	scanf("%f", &r);
	printf("\nwrite the time: ");
	scanf("%f", &t);
	si = (p * r * t) / 100;
	printf("\n\n simple interst of given data is %f", si);
	return 0;
	getch();
}