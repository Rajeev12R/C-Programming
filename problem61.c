#include<stdio.h>
int main(){
    int i,j,m,n;
    int arr1[10][10],arr2[10][10],sum[10][10];
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix:\n");
    for(i = 0 ; i<m;i++){
        for(j = 0; j<n; j++){
            scanf("%d",&arr1[i][j]);
        }
    
    }
    printf("Enter the second matrix:\n");
    for(i = 0 ; i<m;i++){
        for(j = 0; j<n; j++){
            scanf("%d",&arr2[i][j]);
        }
       
    }
    printf("Sum: ");
    printf("Enter the second matrix:\n");
    for(i = 0 ; i<m;i++){
        for(j = 0; j<n; j++){
            sum[i][j]= arr1[i][j]+arr2[i][j];
            printf("%d\t",sum[i][j]);
        }
    printf("\n");
    }
    return 0;
    



}