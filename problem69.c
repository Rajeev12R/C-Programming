#include<stdio.h>
int main(){
    int a[10][10],i,j,m,n,sum=0;

    printf("Enter matrix: ");
    scanf("%d %d",&m,&n);

    for(i =0; i<m; i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i =0; i<m; i++){
        for(j=0;j<n;j++){
            if(a[i][j] % 5 == 0){
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nsum of 5 multiple: %d",sum);
    
}