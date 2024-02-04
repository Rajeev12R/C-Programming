#include<stdio.h>
float Percentage(float sci , float math, float sans);
    float sci,math,sans,p;
int main(){
    float Percentage(float sci, float math, float sans);
    printf("Enter Science marks: ");
    scanf("%f",&sci);
    printf("Enter Maths marks: ");
    scanf("%f",&math);
    printf("Enter Sanskrit marks: ");
    scanf("%f",&sans);

    printf("Percentage %.2f",Percentage(sci, math, sans));
    return 0;
}
float Percentage(float sci, float math, float sans){
    return ((sci+math+sans)/300)*100;
}


