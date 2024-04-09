#include<stdio.h>
int main(){
    int arr[100], pos, i, n;
    scanf("%d\n",&n);
    for(i = 0; i<n; i++)
{
    scanf("%d ",&arr[i]);
}
scanf("%d\n",&pos);
for (i = pos-1;i<n-1;i++){
arr[i]=arr[i+1];
}
for(i = 0; i< n-1; i++){

printf("%d ",arr[i]);
}
}