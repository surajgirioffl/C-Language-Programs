//c language
//1) Programs> 3) Loop> 1) while loop> 1) any name
//1) To repeat any name or string as per user input in while loop
//21
#include<stdio.h>
#include<conio.h>
int main()
{
	char name[30];
    int i,n;
    clrscr();
		printf("Write name who you want to print: ");
		fgets(name,30,stdin);
		
		printf("\nwrite number of times you want to print the provided name: ");
		scanf("%d",&n);
		i=1;
		while (i<n+1)
	               {
	               //	printf("\n %s",name);
	               	puts(name);
	                   i++;
	               	
	               	}
	               
	
	return 0;
	getch();
	}