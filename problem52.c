#include<stdio.h>
void fact(int);
int main(){
    int x;
    scanf("%d",&x);
    fact(x);
}
void fact(int n){
    int f = 1, i;
    for(i = 1; i <= n ; i++){
        f = f * i;   
    }
        printf("%d ",f);

}