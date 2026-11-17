#include <stdio.h>

int main(void)
{
    int year=0, month=0, day=0,day_sum=0;
    scanf("%d %d %d", &year, &month, &day);
    switch (month)
    {
        case 12:
            day_sum+=30;
        case 11:
            day_sum+=31;
        case 10:
            day_sum+=30;
        case 9:
            day_sum+=31;
        case 8:
            day_sum+=31;
        case 7:
            day_sum+=30;
        case 6:
            day_sum+=31;
        case 5:
            day_sum+=30;
        case 4:
            day_sum+=31;
        case 3:
            day_sum+=31;
        case 2:
        if(year%400==0 || (year%4==0 && year%100!=0)){
            day_sum+=29;
        }else{
            day_sum+=28;
        }
        break;
        case 1:
        day_sum+=day;
        break;
    }















    // int year, month, day;
    // int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //
    // if (scanf("%d %d %d", &year, &month, &day) != 3 ||
    //     year < 1 || month < 1 || month > 12) {
    //     return 1;
    // }
    // if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    //     days[1] = 29;
    // }
    // if (day < 1 || day > days[month - 1]) {
    //     return 1;
    // }
    //
    // int total = day;
    // for (int i = 0; i < month - 1; i++) {
    //     total += days[i];
    // }
    // printf("%d\n", total);
    // return 0;
}
