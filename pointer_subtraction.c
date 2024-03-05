#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("ptr = %u\n",ptr);
    printf("ptr2 = %u\n",_ptr);
    printf("Difference = %u\n",ptr - _ptr);
    _ptr == &age;
    printf("Comparision = %u\n",ptr == _ptr);
    return 0;   

}