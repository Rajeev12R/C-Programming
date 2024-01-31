#include<stdio.h>
int main(){
    int i,n;
    for(i=1;i<=n;i++){
    printf("Enter a number: ");
        scanf("%d",&n);
        if ((n%2)!=0){
            printf("Number came odd");
            break;
        }
    }
    return 0;
}