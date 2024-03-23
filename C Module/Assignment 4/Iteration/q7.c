#include <stdio.h>

void printFibonacci(int terms) {
    int prev = 0, current = 1;
    printf("%d %d ", prev, current);
    for (int i = 3; i <= terms; ++i) {
        int next = prev + current;
        printf("%d ", next);
        prev = current;
        current = next;
    }
    printf("\n");
}

int main() {
    printf("First 10 terms of Fibonacci series: ");
    printFibonacci(10);
    return 0;
}
