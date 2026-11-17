#include <stdio.h>

int main()
{
    int a = 10, b = 6, c = 3;

    // Check if one number is a multiplier of another
    if (a % b == 0)
        printf("b is the multiplier of a\n");
    else if (b % c == 0)
        printf("c is the multiplier of b\n");

    // Find the maximum number among the three
    if (a > b && a > c)
        printf("a is max number\n");
    else if (b > a && b > c)
        printf("b is max\n");
    else
        printf("c is max\n");

    return 0;
}

