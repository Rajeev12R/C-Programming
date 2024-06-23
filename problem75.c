#include<stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int *ptr = &n;

    while (*ptr > 0) {
        rev = rev * 10 + *ptr % 10;
        *ptr /= 10;
    }
    printf("Reverse of the number: %d", rev);

    return 0;
}
