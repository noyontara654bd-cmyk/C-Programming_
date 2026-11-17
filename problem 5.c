
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    if (a==b)
        printf("Number 1 and number 2 are equal");
    else
        printf("Number 1 and number 2 are not equal");
    return 0;
}
