#include<stdio.h>

int main() {
    printf("Prime numbers between 1 to 100: 2 ");
    for(int i = 3; i <= 100; i++) {
        int is_prime = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime) {
            printf("%d ", i);
        }
    }
    return 0;
}
