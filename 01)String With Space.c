//Programms> #1)need to know
//1)to write string with space
#include <stdio.h>
int main()
{
    char name[60];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}

