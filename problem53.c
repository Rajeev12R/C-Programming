#include<stdio.h>
int fact(int);
int main(){
    int x;
    scanf("%d",&x);
    int result= fact(x);
    printf("%d",result);
}
int fact(int n){
    int f = 1, i;
    for(i = 1; i <= n ; i++){
        f = f * i;   
    }
        return f;

}