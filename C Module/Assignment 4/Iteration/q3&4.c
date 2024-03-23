#include <stdio.h>

double calculator(double operand1, double operand2, char operator) {
    switch(operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                printf("Error: Division by zero!\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator!\n");
            return 0;
    }
}

int main() {
    printf("Result of 5 + 3: %.2f\n", calculator(5, 3, '+'));
    return 0;
}
