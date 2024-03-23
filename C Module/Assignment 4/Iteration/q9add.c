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

void printPrimeInRange(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    printf("Prime numbers between 1 and 20: ");
    printPrimeInRange(1, 20);
    return 0;
}
