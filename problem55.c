// Without return without argument

#include <stdio.h>

void fact();

int main()
{
   fact();
}

void fact()
{
    int n;
    scanf("%d", &n);
    int f = 1, i;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("%d",f);
}