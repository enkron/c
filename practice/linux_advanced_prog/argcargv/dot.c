#include <stdio.h>

int sleep();

int main(int argc, char *argv[])
{
    while(1) {
        printf(".");
        sleep(1);
    }
}
