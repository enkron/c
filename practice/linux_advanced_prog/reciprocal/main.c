#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "reciprocal.hpp"


int main(int argc, char **argv)
{
    assert(argc > 1);
    int i;
    i = atoi(argv[1]);
    printf("the reciprocal of %d is %g\n", i, reciprocal(i));

    return 0;
}
