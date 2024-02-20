#include<stdio.h>
int main(){
    int n , fact = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n >= 1){
        fact = fact * n;
        n--;
    } 
    printf("Factorial = %d\n",fact);
}