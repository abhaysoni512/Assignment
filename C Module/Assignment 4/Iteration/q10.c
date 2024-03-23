#include <stdio.h>


int isLeapYear(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return 1;
    else
        return 0;
}
int daysInMonth(int month, int year) {
    if (month < 1 || month > 12)
        return -1;
    if (month == 2) {
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}
int main() {
    printf("Is 2024 a leap year? %s\n", isLeapYear(2024) ? "Yes" : "No");
    printf("Number of days in February 2024: %d\n", daysInMonth(2, 2024));
    return 0;
}
