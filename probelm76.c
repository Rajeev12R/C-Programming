#include<stdio.h>
void sum(int *a,int *b,int *t);
int main(){

int n1 , n2 ,total;
printf("Enter n1 \n");
scanf("%d",&n1);

printf("Enter n1 \n");
scanf("%d",&n2);

sum(&n1,&n2,&total);
printf("Total : %d",total);

return 0;
}
void sum(int *a,int *b,int *t){
    *t = *a + *b;
}
