#include <stdio.h>

/* argc and argv usage */

int main(int argc, char *argv[])
{
    printf("the name of the program is %s.\n", argv[0]);
    printf("the program was invoked with %d argumens.\n", argc - 1);

    /* is there one argument at least? */
    if (argc > 1) {
        /* if yes; print it */
        int i;
        printf("the arguments are:\n");
        for(i = 1; i < argc; ++i)
            printf(" %s\n", argv[i]);
    }
    return 0;
}
