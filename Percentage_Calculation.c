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

    float p=((sci+math+sans)/300)*100;
    printf("%.2f",p);
}
float Percentage(float sci, float math, float sans){
    return ((sci+math+sans)/300)*100;
}

