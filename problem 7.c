#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if age is greater than 10 to issue a ticket
    if (age > 10)
    {
        printf("Give ticket\n");

        // Categorize age using nested-if
        if (age > 10 && age <= 18)
        {
            printf("Child\n");
        }
        else if (age > 18)
        {
            printf("Adult\n");
        }
    }
    else
    {
        // Age is 10 or below
        printf("Age is too small so tickets cannot be issued\n");
    }

    return 0;
}

