#include <stdio.h>

int main(void)
{
    int peaches = 1;

    for (int day = 9; day >= 1; day--) {
        peaches = (peaches + 1) * 2;
    }
    printf("%d\n", peaches);
    return 0;
}
