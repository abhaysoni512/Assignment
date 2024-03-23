#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    printf("2 raised to the power of 3: %d\n", power(2, 3));
    return 0;
}
