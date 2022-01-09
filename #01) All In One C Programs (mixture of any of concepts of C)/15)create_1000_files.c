#include <stdio.h>
int main()
{
    char filename_with_path[200];

    for (int i = 1; i <= 1000; i++)
    {
        sprintf(filename_with_path, "D:\\C Language\\All C Programs\\1) Cxxdroid Application\\Repositories\\C Language Special\\C_Language_Programs\\#01) All In One C Programs (mixture of any of concepts of C)\\folder\\filename_%d.txt", i);
        FILE *ptr = fopen(filename_with_path, "w");
        printf("file create successfully %d\n", i);
        fclose(ptr);
    }
    return 0;
}