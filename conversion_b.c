#include <stdio.h>

void printBinary(unsigned int b) {
    if (b > 1) {
        printBinary(b / 2);
    }
    printf("%d", b % 2);
}
