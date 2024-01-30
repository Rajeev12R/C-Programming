#include<stdio.h>
#include<math.h>
int main(){
    int a=1;
    int b=5;
    int c= 9;

    // a=a+b; instead
    a+=b;
    c-=b;
    
    printf("%d \n",a);
    printf("%d \n",c);

    return 0;

}