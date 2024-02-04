#include <stdio.h>

int main() {
    int a, b;

    // Input the numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using addition and subtraction
    a = a + b;
    b = a - b;
    a = a - b;

    // Output the swapped values
    printf("After swapping: %d %d\n", a, b);

    return 0;
}
