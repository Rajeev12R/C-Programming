#include<stdio.h>
int main(){
    int a[10][10],i,j,m,n,count=0;
    scanf("%d %d",&m,&n);

    printf("Enter array:");
    for(i = 0; i<m; i++){
        for(j=0;j<n;j++){
            printf("a%d%d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i<m; i++){
        for(j=0;j<n;j++){
            if(a[i][j]%2!=0){
                count++;
            }
        }
    }
    printf("\n%d",count);

}