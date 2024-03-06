// With return without argument

#include <stdio.h>

int fact();

int main()
{
    int result = fact();
    printf("%d", result);
}

int fact()
{
    int n;
    scanf("%d", &n);
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}