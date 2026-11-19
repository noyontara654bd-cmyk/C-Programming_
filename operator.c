#include <stdio.h>

int main() {
    // 1. Use of Increment (++) and Decrement (--) operators
    int x = 5;
    printf("Initial x = %d\n", x);

    printf("Post-increment (x++): %d\n", x++); // Prints 5 first, then becomes 6
    printf("After post-increment, x = %d\n", x); // Now shows 6

    --x; // Pre-decrement: decreases value by 1, making it 5 again
    printf("After pre-decrement (--x), x = %d\n\n", x);

    // 2. Use of Bitwise Left Shift (<<) operator
    int y = 6;
    int shift_result = y << 2; // 6 * (2^2) = 24
    printf("Bitwise Left Shift (6 << 2) = %d\n\n", shift_result);

    // 3. Use of Arithmetic Operators (*, /, +)
    int a = 1, b = 2, c = 3;
    int math_result = (b * c) + a * 6 / 3; // (2 * 3) + (1 * 6 / 3) = 6 + 2 = 8
    printf("Arithmetic Result = %d\n", math_result);

    return 0;
}
