
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,fact= 1, i;
    ptr = (int*)malloc(sizeof(int));
    scanf("%d",ptr);
    for(i = 1; i<=*ptr; i++){
        
        fact = fact * i;
        
    }
    printf("%d",fact);
}
