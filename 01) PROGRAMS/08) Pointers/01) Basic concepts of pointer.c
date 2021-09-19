//c language
/* 1) Programs> 08) Pointers>*/
/*01) Basic concept of pointer*/
//94
#include <stdio.h>
void main()
{
	int a;
	int *p;
	a = 5;
	p = &a;
	printf("\n%d is the value of a", a);

	printf("\n%p is the address of a", p);

	printf("\n%p is the address of p", &p);

	printf("\n%d is the value of a using pointer", *p);
	printf("\n%d is the value of a using * operator on address of a", *(&a));
	/*keep in mind here that
p=&a (i.e p is equal to address of a)
*p=a=*(&a)  (i.e '*' means value at address. Yaha hoga value at address p. Means p varable mein jo address hai uska value i.e value at the &a which is 5 
we use %p, %u, 
*/
}
/*
author- suraj kumar giri
date- 22nd May 2021
purpose- Just for understand the basic concept of pointer
*/
