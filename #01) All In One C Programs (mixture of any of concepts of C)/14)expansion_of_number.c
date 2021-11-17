/*Program to display expansion of any number written by user*/
#include <stdio.h>
#include <stdlib.h>
int place_value(int n);
int main()
{
    int n;
    printf("write the number to display the expansion:\n");
    scanf("%d", &n);

    int save_number = n;
    int number_of_digits = 0;
    int remainder;

    while (n > 0)
    {
        n = n / 10;
        number_of_digits++;
    }
    int *p = (int *)malloc(number_of_digits * sizeof(int));
    n = save_number;

    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        *p = remainder;
        p++;
    }

    p = p - 1;
    while (number_of_digits > 0)
    {
        if (number_of_digits > 1)
            printf("\033[31;1m %d +", ((*p) * place_value(number_of_digits - 1)));
        else
            printf("\033[31;1m %d\n", ((*p) * place_value(number_of_digits - 1)));
        p--;
        number_of_digits--;
    }
    free(p);
    printf("\033[0m"); //to clear the color
    system("pause");
    return 0;
}

int place_value(int n)
{
    int value = 1;
    while (n > 0)
    {
        value = value * 10;
        n--;
    }
    return value;
}

/*
  author - suraj kumar giri
  date - 17th November 2021
  purpose - Just to solve the problem
*/