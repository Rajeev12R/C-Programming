#include<stdio.h>
int main(){
    float a,b,c,add,average;

    printf("Enter the first value: ");
    scanf("%f",&a);

    printf("Enter the second value: ");
    scanf("%f",&b);

    printf("Enter the third value: ");
    scanf("%f",&c);

    add = a+b+c;
    average=add/3;

    printf("The Average of the 3 Numbers is %.2f",average);

    return 0;
}