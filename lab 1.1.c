#include <stdio.h>

int main()
{

    int a, b, c, sum;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if (sum == 180 && a > 0 && b > 0 && c > 0)
    {
            printf("Triangle can be formed.\n");
    }
    else
    {
        printf("Triangle cannot be formed.\n");
    }

    return 0;
}
