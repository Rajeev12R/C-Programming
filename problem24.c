 #include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d\n",&year);
    (year%4==0) && (year%100!=0) ? printf("It is a leap year"): (year % 400 ==0)?printf("It is a leap year"): printf("No leap year");
    return 0;
}