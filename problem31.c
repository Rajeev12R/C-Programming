#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character you want to show in uppercase: ");
    scanf("%c",&ch);
    if (ch >=97 && ch <=122)
    printf("%c",ch - 32);
    return 0;
}