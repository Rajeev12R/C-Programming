#include<stdio.h>
int main(){
    float price= 100.15;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f\n",**pptr);
}