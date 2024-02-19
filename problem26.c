#include<stdio.h>
int main(){
    float item_price[3];
    float gst = 0.5;
    scanf("%f %f %f",&item_price[0],&item_price[1],&item_price[2]);
    printf("Final Price of Item1,ITem2 and Item3 are %.2f %.2f %.2f",item_price[0]+gst,item_price[1]+gst,item_price[2]+gst);
    return 0;
}