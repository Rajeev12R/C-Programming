#include<stdio.h>
char a;
void greet();

int main(){

    greet();
}
void greet(){

    scanf("%c",&a);

    if (a=='N'){
        printf("Namaste");
    }
    else if (a=='B'){
        printf("Bonjour");
    }
    else{
        printf("Not Valid");
    }

}