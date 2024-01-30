#include<stdio.h>
int main(){
    float p,r,t,ans;
    printf("Enter the Principle Value: ");
    scanf("%f",&p);

    printf("Enter the Rate Value: ");
    scanf("%f",&r);

    printf("Enter the Time Value: ");
    scanf("%f",&t);

    ans = p*r*t*100;

    printf("The SI is %.2f\n", ans);
    return 0;

}