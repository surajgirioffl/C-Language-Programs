//write a programme in c language to
//concate of two string into another
//String
#include<stdio.h>
#include<conio.h>
int main()
{
	char n1[10],n2[10],n3[20];
	int i,k;
	i=0;k=0;
	clrscr();
	printf("\nEnter the 1st String=");
	scanf("%s",&n1);
	printf("\nEnter the 2nd String=");
	scanf("%s",&n2);
	while(n1[i]!=NULL)
	{
		n3[i]=n1[i];
		i++;
	}
	while(n2[k]!=NULL)
	{
		n3[i]=n2[k];
		i++;k++;
	}
	n3[i]=NULL;
	printf("Concat of two String=%s",n3);
	return 0;
	getch();
}

//write a programe in c language to accept a string
// and display it.

void main()
{
	char name[10];
	clrscr();
	puts("Enter your name");
	gets(name);
	puts(name);
	getch();
}

//write a programe in c language to accept a string
//through the keyboard then find number of vowel
//and number of consonent
#include<stdio.h>
void main()
{
	char name[10];
	int i,v,c;
	i=0;v=0;c=0;
	clrscr();
	puts("Enter your name");
	gets(name);
	while(name[i]!=NULL)
	{
		if(name[i]=='a'||name[i]=='e'||
		   name[i]=='i'||name[i]=='o'||
		   name[i]=='u'||name[i]=='A'||name[i]=='E'||
		   name[i]=='I'||name[i]=='O'||
		   name[i]=='U')
		{
			v++;
		}
		else
		{
			c++;
		}
		i++;
	}
	puts(name);
	printf("\nNumber of vowel=%d",v);
	printf("\nNumber of Consonent=%d",c);
	getch();
}
