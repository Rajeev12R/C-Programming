#include<stdio.h>
#include<string.h>
int main(){

    char s1[20],s2[20];
    int x;
    printf("\n Enetr first :");
    fgets(s1,20,stdin);
    printf("\n Enetr second :");
    fgets(s2,20,stdin);

    x = strcmp(s1,s2);
    if(x == 0){
        printf("\n String are equal");
    }
    else if(x > 0)
{
    printf("\n First string is greater than second string");

}
else{
    printf("\n First strign is less than second string");
}


}