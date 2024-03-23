#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    printf("GCD of 12 and 18: %d\n", gcd(12, 18));
    return 0;
}
