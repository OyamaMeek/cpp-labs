#include <stdio.h>

int main(void)
{
    for (int figure = 0; figure < 2; figure++) {
        int rows = figure == 0 ? 4 : 7;
        for (int row = 1; row <= rows; row++) {
            int level = row <= 4 ? row : 8 - row;
            for (int column = 0; column < 2 * (4 - level); column++) {
                printf(" ");
            }
            for (int star = 0; star < 2 * level - 1; star++) {
                printf(star == 0 ? "*" : " *");
            }
            printf("\n");
        }
        if (figure == 0) {
            printf("\n");
        }
    }
    return 0;
}
