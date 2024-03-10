#include <stdio.h>

int main() {
    char ch;
    float temp;

Here:
    printf("Temperature to be calculated C/F: ");
    scanf(" %c", &ch);

    if (ch == 'C' || ch == 'c') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
    } else if (ch == 'F' || ch == 'f') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
    }

    switch (ch) {
        case 'C':
        case 'c':
            printf("Temp in Celsius is %.2f\n", (5.0 / 9) * (temp - 32));
            break;
        case 'F':
        case 'f':
            printf("Temp in Fahrenheit is %.2f\n", (9 * temp / 5) + 32);
            break;
    }

    char c;
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &c);
    if (c == 'y' || c == 'Y')
        goto Here;

    return 0;
}

