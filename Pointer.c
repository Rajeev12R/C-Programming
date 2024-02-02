#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;

    //Address
    printf("%p\n",&age);

    // unsigned int (typecasting of pointer value into simple integer value)
    printf("%u\n",&age);

    printf("%u\n",ptr);

    // pionter address
    printf("%u\n",&ptr);

    // pionter value in that address
    printf("%d\n",*ptr);

    return 0;
}