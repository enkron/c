#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/errno.h>

int main(int argc, char* argv[])
{
    int fd;
    fd = open(argv[1], O_RDONLY);

    if(fd == -1)
        fprintf(stderr, "error while opening file: %s\n", strerror(errno));
    exit(1);
}
