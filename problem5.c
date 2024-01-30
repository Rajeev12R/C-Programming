#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf("Number is Divisible");
    }
    else{
        printf("Not Divisible");
    }

    return 0;
    
}
