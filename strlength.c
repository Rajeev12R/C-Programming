#include<stdio.h>

int main(){

char s1[100];
int i,count = 0;
printf("Enter the string : ");
fgets(s1,100,stdin);

i = 1;
while(s1[i] != '\0'){
    count++;
    i++;
}
// s1[i] = '\0';
printf("\nLength String is %d",count);

return 0;
}