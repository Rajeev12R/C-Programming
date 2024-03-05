#include<stdio.h>

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void main(){
    int a,b;
    char response;
    do{
        printf("Enter number A : ");
        scanf("%d",&a);
        printf("Enter number B : ");
        scanf("%d",&b);
        if(a>=1 && a<=10000 && b>=1 && b<=10000){
            if(a==b){
                printf("\nNumbers are same , enter different values.");
            }
            else{
                if(a>b){
                    swap(&a,&b);
                }
                for(a;a<=b;a++){
                    if(a%2==0){
                        printf("\n%d",a);
                    }
                }
            }
        }else{printf("\nEnter correct range");}
        do{
            printf("\nDo you want to repeat : ");
            scanf("%s",&response);
            if(response!='y' || response!='n'){
                printf("\nInvalid input");
            }
        }while(response!='y' || response!='n');
    }while(response=='y');    
}