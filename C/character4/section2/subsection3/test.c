//
// Created by OyamaHappa on 2026/10/29.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int a=10;
    char string1[5];
    snprintf(string1, sizeof string1, "%d", a);
    int c=0;
    c=strlen(string1);
    printf("%s\n", string1);
    printf("%d\n", c);
    strcpy(string1, "12");
    printf("%s\n", string1);
    scanf("%s", string1);
    printf("%s\n", string1);

    return 0;
}
