#include<stdio.h>
    void swap(int x, int y);
    int main(){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("Value before swap x = %d\t y = %d\n",x,y);
        swap(x,y);
        printf("Value of x and y is %d\t %d\n",x,y);

    }
    void swap(int x, int y){
        int temp;
        temp = x;
        x = y;
        y = temp;
        printf("Value after swap x = %d\t y = %d\n",x,y);

    }
