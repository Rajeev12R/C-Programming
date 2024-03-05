#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    // Check if the input number is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        // Print the factorial
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
