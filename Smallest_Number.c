#include<stdio.h>
int main(){
    int a,b,c,d;

    printf("Enter the first value: ");
    scanf("%d",&a);

    printf("Enter the second value: ");
    scanf("%d",&b);

    printf("Enter the third value: ");
    scanf("%d",&c);

    printf("Enter the forth value: ");
    scanf("%d",&d);

    if (a < b && c && d){
        printf("%d is smallest",a);

    }
    else if (b < a && c && d)
    {
        printf("%d is smallest",b); 
    }
    else if (c < a && b && d)
    {
        printf("%d is smallest",c);
    }
    else if (d < b && c && a){
        printf("%d is smallest",d);
    }
    else{
        printf("Invalid");
    }
    return 0;
}