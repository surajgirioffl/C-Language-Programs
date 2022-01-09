#include <stdlib.h>
#include <stdio.h>
int main()
{
    char command[200] = "mkdir this_is_me";
    for (int i = 1; i <= 1000; i++)
    {
        sprintf(command, "mkdir \"D:\\C Language\\folder\\new_directory_%d\"", i);
        if (system(command)) // system function return 0 on failure
            printf("Failed to create folder\n");
        else
            printf("Directory created successfully %d\n", i);
    }
    return 0;
}
// we use "mkdir new_directory_name" to create directory in current working directory.
// we use "mkdir path/new_directory_name" to create directory in any other directory of local filesystem
