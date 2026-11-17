#include <stdio.h>
#include <math.h>
int is_prime(long long number)
{
    if (number < 2) {
        return 0;
    }
    if (number == 2) {
        return 1;
    }
    if (number % 2 == 0) {
        return 0;
    }
    for (long long divisor = 3; divisor <= sqrt(number); divisor += 2) {
        if (number % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int a, b;
    long long sum = 0;

    //读取两个整数，只有两个数都读取成功且都大于 0，程序才继续执行；否则执行 return 1;。
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        return 1;//程序因错误而结束
    }
    if (a > b) {
        int temporary = a;
        a = b;
        b = temporary;
    }

    for (long long number = a; number <= b; number++) {
        if (is_prime(number)) {
            sum += number;
        }
    }

    printf("%lld\n", sum);
    return 0;
}
