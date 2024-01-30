#include<stdio.h>
int main(){
    int age;

    printf("Enter Person's Age : ");
    scanf("%d",&age);
    age >= 18? printf("Adult"): printf("Not adult");
    return 0;
}