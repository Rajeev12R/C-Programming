#include<stdio.h>
int main(){
int a = 5;
int *ptr = &a;
*ptr = 10;
printf("%d %d\n",a,*ptr);
printf("%u %u\n",&a,ptr);
printf("%u %u\n",&*ptr,*&ptr);
printf("%u",&ptr);

return 0;
}