#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
void printFibonacciSeries(int terms) {
    for (int i = 0; i < terms; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int main() {
    printf("5th term of Fibonacci series: %d\n", fibonacci(5));
    printf("First 10 terms of Fibonacci series: ");
    printFibonacciSeries(10);
    return 0;
}
