#include<stdio.h>
int main(){

    int marks[4];

    printf("Enter Phy:");
    scanf("%d\n",&marks[0]);

    printf("Enter Sci:");
    scanf("%d\n",&marks[1]);

    printf("Enter Mth:");
    scanf("%d\n",&marks[2]);

    printf("Enter Che:");
    scanf("%d\n",&marks[3]);

    printf("Physics marks = %d Science marks = %d Maths marks = %d Chemistry marks = %d ",marks[0],marks[1],marks[2],marks[3]);
    return 0;

}