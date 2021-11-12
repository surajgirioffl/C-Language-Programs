#include <stdio.h>
int main()
{
    int rows;
    printf("write number of rows for 'H'(rows=columns) in even:\n");
    scanf("%d", &rows);
    if (rows < 4)
    {
        printf("Rows must be greater than 3.\n");
        rows = 8;
    }
    //no. of rows for 'H' = rows and no. of rows for 'I'=rows-3 (as per question)
    int rows_i = rows - 3;

    printf("\033[1;31m"); //for red color printing
    //for 'H'
    for (int i = 1; i <= rows; i++)
    {
        if (i == rows / 2 || i == (rows / 2) + 1)
        {
            for (int j = 0; j < rows; j++)
                printf("* ");
        }
        else
        {
            for (int j = 0; j < rows; j++)
            {
                if (j == ((rows - 2) / 2) || j == ((rows - 2) / 2) + 1) //for space
                    printf("  ");
                else
                    printf("* ");
            }
        }

        //for 'I'
        printf("    "); //for space between 'H' and 'I'
        if (i == 1 || i == rows)
        {
            for (int k = 0; k < rows_i; k++)
                printf("* ");
        }
        else
        {
            for (int k = 0; k < rows_i; k++)
            {
                if (k == 0 || k == rows_i - 1)
                    printf("  ");
                else
                    printf("* ");
            }
        }

        printf("\n");
    }

    printf("\033[0m");

    return 0;
}