#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if(a>=0){
        printf("Number is positive \n");
        if(a%2==0){
            printf("Number is even also \n");
        }
        else{
            printf("Number is odd \n");
        }
    }
    else{
        printf("Number is negative \n");
        if(a%2==0){
            printf("Number is even also \n");
        }
        else{
            printf("Number is odd \n");
        }
    }
    return 0;
}