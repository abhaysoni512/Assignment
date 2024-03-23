#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    printf("Is 17 a prime number? %s\n", isPrime(17) ? "Yes" : "No");
    return 0;
}
