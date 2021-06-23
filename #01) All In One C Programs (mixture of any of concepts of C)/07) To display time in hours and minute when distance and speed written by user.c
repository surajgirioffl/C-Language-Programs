//c language
/*#1) All In One C Programs (mixture of any of concepts of C)>*/
/*07) To display time in hours and minute when distance and speed written by user.c*/
//103
/*Q. write a program to display time in hours and minute when distance covered and speed of van entered by user on console*/
// Date of initiation- 24th june 2021
//COMPLETED

#include <stdio.h>
int main()
{
	float dis, speed;
	float time;
	int t1, t2;
	printf("write Distance in KM: ");
	scanf("%f", &dis);
	printf("write Speed in KM/H: ");
	scanf("%f", &speed);

	time = dis / speed;
	time = time * 60;
	t1 = time / 60;
	t2 = (int)time % 60;
	/*	t2=time%60;
	modulus operator only works with integers
	*/
	printf("Time is %d hours %d minutes", t1, t2);
	return 0;
}
/*
author- suraj kumar giri
date of completion- 24th june 2021

*/