//c language
/*1) Programs> 4) switch case and default> 1) calculator*/
/*1) Calculator with sum, subtract, multiply and divide using switch case*/
//38
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a, b, j;
	char k;
	printf("enter the value of 1st number: ");
	scanf("%d", &a);
	printf("\nenter the operator: ");
	scanf(" %c", &k);
	/*space before %c is required when it's not asked from user 1st. if we ask user to write the value of char as 2nd,3rd or more's input rather than as 1st then we have to use space before %c in scanf because this space will eliminate any white space i.e character space, new line,tab etc. otherwise processor will take the input as white space automatically.  If we take input in char as input from user then there is no requirement of such types of rule because in 1st time there is no white space i.e new line etc.*/
	// the value of char always define under this sign ('___').
	printf("\nenter the value of 2nd number: ");
	scanf("%d", &b);

	switch (k)
	{
	case '+':
		j = a + b;
		printf("\nsum of %d and %d is %d", a, b, j);
		break;

	case '-':
		j = a - b;
		printf("\nsubtraction of %d and %d is %d", a, b, j);
		break;

	case '*':
		j = a * b;
		printf("\nmultiplication of %d and %d is %d", a, b, j);
		break;

	case '/':
		j = a / b;
		printf("\n Division of %d and %d is %d", a, b, j);
		break;

	default:
		printf("You have selected wrong operator. write correct operator");
	}

	return 0;
	getch();
}
