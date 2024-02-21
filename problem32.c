#include<stdio.h>
int main(){
    int n, sum = 0 , rem,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (n > 0){
        rem = n % 10;
        sum = sum + rem;
        n = n/10;
        count = count + 1;
    }
    printf("Sum = %d\n",sum);
    printf("Count = %d",count);
    return 0;
}