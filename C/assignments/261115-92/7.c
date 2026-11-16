#include <stdio.h>

int main(void)
{
    int year, month, day;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (scanf("%d %d %d", &year, &month, &day) != 3 ||
        year < 1 || month < 1 || month > 12) {
        return 1;
    }
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        days[1] = 29;
    }
    if (day < 1 || day > days[month - 1]) {
        return 1;
    }

    int total = day;
    for (int i = 0; i < month - 1; i++) {
        total += days[i];
    }
    printf("%d\n", total);
    return 0;
}
