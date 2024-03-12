#include <stdio.h>
#include<math.h>
int Neon(int num) {
    int square = pow(num,2);
    int sum = 0;
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    if (sum == num)
        return 1; 
    else
        return 0; 
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Neon(num))
        printf("%d is a Neon number.\n", num);
    else
        printf("%d is not a Neon number.\n", num);

    return 0;
}