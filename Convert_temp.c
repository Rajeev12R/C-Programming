#include<stdio.h>
    float convertTemp(float celsius);
int main(){

    float far = convertTemp(37.5);
    printf("%f",far);
    return 0;

}
float convertTemp(float celsius){
    float far = celsius*(9/5)+32;
    return far;
}