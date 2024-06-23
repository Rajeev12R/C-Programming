#include <stdio.h>
int main()
{
    int arr[10][10], m, n, i, j, arr2[10][10];
    printf("Enter m x n:\n");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                // scanf("%d", &arr[i][j]);
                if (i <= j)
                {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }

