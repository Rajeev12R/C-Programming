#include<stdio.h>
int main(){
    int a,b,sum,sub,mul,div,rem;
printf("Enter a: ");
scanf("%d",&a);

printf("Enter b: ");
scanf("%d",&b);

sum = a+b;
sub=a-b;
mul=a*b;
div=a/b;
rem=a%b;
printf("Sum of a and b is %d\n",sum);
printf("Sub of a and b is %d\n",sub);
printf("mul of a and b is %d\n",mul);
printf("div of a and b is %d\n",div);
printf("rem of a and b is %d\n",rem);
    return 0;
}