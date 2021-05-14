//c language
/* 1) Programs> 7) Function chapter> 1) conversion*/
/* 1) conversion of fahrenheit to celsius using function*/
//84
#include <stdio.h>
float c(float f); /*Prototype declaration or function declaration*/
int main()
{
	float f, cel;
	printf("Enter the value in farenhite\n: ");
	scanf("%f", &f);
	cel = c(f); //function calling
	printf("value in celsius is %f", cel);
	return 0;
}
float c(float f)
{
	float cel; //we can take other than cel variable
	cel = ((5 * f) - 160) / 9;
	return cel;
}
/*
author- suraj kumar giri
date- 9th may 2021
purpose- problem asked by a person on whatsApp

*/