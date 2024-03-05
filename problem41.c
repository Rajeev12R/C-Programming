#include<stdio.h>
int main(){
   int n ;
   int prev = 0, curr = 1, next , i = 1;
    scanf("%d",&n);

    while (i <= n){
        printf("%d ",prev);
        next = prev + curr;
        prev = curr;
        curr = next ;
        i++;
    }
   
    return 0;
}