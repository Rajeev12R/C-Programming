#include<stdio.h>
void sum(int,int);
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);

}
void sum(int a,int b){
    int s;
    s = a+b;
    printf("Sum = %d",s);
}