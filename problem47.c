#include<stdio.h>
int main(){
    int a,b;
    scanf("%d\n%d",&a,&b);
    for(int i = 1; i<=b; i++){
        if(a % i == 0 && b % i == 0){
            printf("%d ", i);
        }
    }
}