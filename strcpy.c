#include<stdio.h>
#include<string.h>

int main(){

    char ori[20],dup[20];
    char *z;

    printf("\nEnter your name: ");
    fgets(ori,20,stdin);

    z = strcpy(dup,ori);
    printf("Original String is : %s",ori);
    printf("\n Duplicate String is: %s",dup);

    printf("\n Value of z is : %s",z);

return 0;
}