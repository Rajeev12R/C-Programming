#include<stdio.h>
int main(){
    int n , rev = 0,rem,org;
    printf("Enter the number: ");
    scanf("%d",&n);
    org = n;

    while(n > 0){
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
    }
    printf("Reverse = %d\n",rev);
    if(rev == org){
        printf("It is a Palindrome");
    }
    else{
        printf("It is not a Palindrome");
    }
    return 0;
}