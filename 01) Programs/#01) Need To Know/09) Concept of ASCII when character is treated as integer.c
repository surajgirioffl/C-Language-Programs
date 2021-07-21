// c language
/* 1) Program> #1) Need to know>  */
/* 09) Concept of ASCII when character is treated as integer*/
//107

/*agar ham kahin bhi character ko integer se relate karte hai
to wo us character ke ASCII value se relate hota hai na ki us
character se. 

*/
//use of any any character as integer( concept of ASCII value)
int main(void)
{
	char c;
	printf("write any character: \n");
	scanf("%c", &c);
	if (c == 65)		   //ASCII value of A is 65
		puts("maza aaya"); //it will work when we write A as input because ASCII value of A is 65

	return 0;
}