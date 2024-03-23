#include <stdio.h>

int nextFibonacci() {
    static int prev = 0, current = 1;
    int next = prev + current;
    prev = current;
    current = next;
    return next;
}

int main() {
    printf("Next term of Fibonacci series: %d\n", nextFibonacci());
    return 0;
}
