#include <stdio.h>

void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    if (n == 1) {
        printf("1");
        return;
    }
    printBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    printf("Binary representation of 10: ");
    printBinary(8);
    printf("\n");
    return 0;
}
