#include <stdio.h>
int main()
{
    int n, sum = 0, org , rev = 0, rem,rem2, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    org = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
        

        rem2 = org % 10;
        rev = rev * 10 + rem2;
        org = org / 10;
        count = count + 1;
        if (count == 1)
        {
            break;
        }
    }
    // printf("%d", sum);
    printf("%d", rev);
    return 0;
}
