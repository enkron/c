#include <stdio.h>

char say_hello(char name[10]) {
    return printf("hello %s\n", name);
}

int main(void) {
    char srj[10] = "srj";
    return say_hello(srj);
}
