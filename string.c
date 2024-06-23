#include<stdio.h>

int main(){
    char carname[20];
    printf("Enter name: ");
    fgets(carname,20,stdin);

    puts("Name of car ");
    puts(carname);

return 0;
}