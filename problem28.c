#include<stdio.h>

void opr (int a , int b , int *sum, int *avr, int *prod );

int main(){
int a = 3 ,b = 5;
int sum , prod, avr;
opr (a,b,&sum,&avr,&prod);
printf("sum = %d  prod = %d  avr = %d",sum,prod,avr);

return 0;

}
void opr (int a , int b , int *sum, int *avr, int *prod ){
    *sum = a+b;
    *prod = a*b;
    *avr = (a+b)/2;
}
