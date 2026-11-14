#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    if (day == 1) {
        printf("Saturday\n");
    }
    else if (day == 2) {
        printf("Sunday\n");
    }
    else if (day == 3) {
        printf("Monday\n");
    }
    else if (day == 4) {
        printf("Tuesday\n");
    }
    else if (day == 5) {
        printf("Wednesday\n");
    }
    else if (day == 6) {
        printf("Thursday\n");
    }
    else if (day == 7) {
        printf("Friday\n");
    }
    else {
        printf("Invalid day number\n");
    }

    return 0;
}
