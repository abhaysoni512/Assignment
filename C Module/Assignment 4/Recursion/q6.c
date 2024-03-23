#include <stdio.h>

void printHexadecimal(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    if (n == 1) {
        printf("1");
        return;
    }
    printHexadecimal(n / 16);
    int remainder = n % 16;
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + remainder - 10);
}

int main() {
    printf("Hexadecimal representation of 100: ");
    printHexadecimal(100);
    printf("\n");
    return 0;
}
