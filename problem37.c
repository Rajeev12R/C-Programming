#include<stdio.h>
int main(){
    int dec,rem,oct = 0, i = 1;
    printf("Enter the number: ");
    scanf("%d",&dec);

    while(dec != 0){
        rem = dec % 8;
        oct = oct + rem * i;
        i = i * 10;
    }
    printf("Octal of this number = %d",oct);
}