#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{

    if (argc <= 1)
    {
        printf("provide file name as cli arg");
        return -1;
    }

    struct stat st;
    stat(argv[1], &st);
    off_t size = st.st_size;

    printf("bytes: %ld", size);

    return 0;
}