//
// Created by NfryCreator on 2023/3/28.
//
#include <stdio.h>

int main(void) {
    int day_1, month_1, year_1, day_2, month_2, year_2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &day_1, &month_1, &year_1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &day_2, &month_2, &year_2);
    if (year_1 == year_2) {
        if (month_1 == month_2) {
            if (day_1 == day_2) {
                printf("%d/%d/%d is equal to %d/%d/%d\n", month_1, day_1, year_1, month_2, day_2, year_2);
            } else {
                if (day_1 < day_2) {
                    printf("%d/%d/%d is earlier than %d/%d/%d\n", month_1, day_1, year_1, month_2, day_2, year_2);
                } else {
                    printf("%d/%d/%d is earlier than %d/%d/%d\n", month_2, day_2, year_2, month_1, day_1, year_1);
                }
            }
        } else {
            if (month_1 < month_2) {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", month_1, day_1, year_1, month_2, day_2, year_2);
            } else {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", month_2, day_2, year_2, month_1, day_1, year_1);
            }
        }
    } else {
        if (year_1 < year_2) {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_1, day_1, year_1, month_2, day_2, year_2);
        } else {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", month_2, day_2, year_2, month_1, day_1, year_1);
        }
    }
    return 0;
}
