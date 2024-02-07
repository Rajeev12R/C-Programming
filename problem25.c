#include<stdio.h>
int main(){
    float f;
    printf("enter deg f: ");
    scanf("%f",&f);
    printf("%f", (f - 32) * 5/9);
    return 0;
}