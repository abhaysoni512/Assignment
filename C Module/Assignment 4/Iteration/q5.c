#include <stdio.h>

void printCharacter(char ch, int times) {
    for (int i = 0; i < times; ++i) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    printf("Printing character 'X' 5 times: ");
    printCharacter('X', 5);
    return 0;
}
