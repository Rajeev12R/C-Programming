#include <stdio.h>
int main()
{
    int arr[100], pos, i, n, value;
    printf("Enter number of elements in array\n");
    scanf("%d\n", &n);

    for (i = 0; i <= n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("\n%d", &pos);
    scanf("\n%d", &value);

    for (i = n - 1; i >= pos-1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    printf("Result: \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}