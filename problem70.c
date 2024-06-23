#include<stdio.h>
int main(){
    int a[10],i,min,max,n;

    scanf("%d\n",&n);

 for(i = 0; i< n; i++){
    scanf("%d",&a[i]);
 }
 min = a[0];

 for ( i = 1; i<n; i++){
    if(a[i]< min){
        min = a[i];
    }
 }
 max = a[0];
 for ( i = 1; i<n; i++){
    if(a[i]> max){
        max = a[i];
    }
 }

 printf("Max : %d\n",max);
 printf("Min : %d",min);


}