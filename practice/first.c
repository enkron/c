#include <stdio.h>

int square(int num) {
    return printf("%d\n", num * 30);
}

int main(void) {
    int num = 10;
    for(int i = 0; i < 10; i++) { printf("%d\n", i); }
    return square(num), printf("hello\n");
}
