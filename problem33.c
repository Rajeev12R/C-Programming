#include<stdio.h>
int main(){
    int n, mul = 1,rem;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n>0){
        rem = n % 10;
        mul = mul * rem;
        n = n/10;
    }
    printf("Product of digits = %d",mul);
    return 0;
}