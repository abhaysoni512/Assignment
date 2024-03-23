#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    printf("2 raised to the power of 3: %d\n", power(2, 3));
    return 0;
}
