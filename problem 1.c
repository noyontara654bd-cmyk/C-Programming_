#include<stdio.h>
int main()
{
    int height;
    printf("enter height:");
    scanf("%d", &height);
    if(height<150)
        printf("the person is dwarf");
    else if(height<160)
        printf(" the person is average man");
    else if(height<=190)
        printf("the person is taller gentleman");
    else
        printf("height is not good");
    return 0;
}
