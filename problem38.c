#include<stdio.h>
int main(){
    int n , org , sum = 0 , rem,count = 0;
    printf("Enter  the number: ");
    scanf("%d",&n);
    org = n ;
    do {
        rem = n % 10;
        sum = sum + rem;
        n = n /10;
        count = count + 1;
        if (count == 2){
            break;
        }
    }
    while(n > 0);
        printf("%d",sum);

   
    return 0;

}