//c language
/*7) Other Programs*/
/*1) some concept of string checked during programming of number to word*/
//82
#include <stdio.h>
#include <string.h>

int main()
{
	char ram[111], str3[22], str[111];

	//ram= "shayam ji mahraj"  // it will show error. because array type char is not assignable means the array bonded variable of char data type can't be assigned using assigment operator(=). You can copy one variable to other but can't assign.

	strcpy(ram, "shayam ji mahraj");
	printf("\n%s", ram);

	ram[22] = 'z';
	printf("\n%c", ram[22]);

	strcpy(str3, "one hundred ");
	printf("\n%s", str3);
	if (str[0] == '\0')
		printf("\nwow maaza aaya. super done..");
}

/*
author- suraj kumar giri
date- 2nd may 2021
purpose- this program is made for clearification of some concept of string i.e used in programming of displaying of words of number entered by user.
*/