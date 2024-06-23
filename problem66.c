#include <stdio.h>
int main()
{
    int arr[10][10],sum = 0, m, n, i, j;
    scanf("\n%d %d", &m, &n);
    for (i = 0; i<m; i++){
        for (j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i<m; i++){
        for (j=0;j<n;j++){
            if(i == j){
                sum= sum+ arr[i][j]; 
            }
        }
    }
            printf("%d",sum);
    return 0;
}