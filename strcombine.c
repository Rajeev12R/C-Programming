#include<stdio.h>

int main(){

char s1[100],s2[100];
int i,j;
printf("Enter the string : ");
fgets(s1,100,stdin);

printf("Enter the 2nd string : ");
fgets(s2,100,stdin);

i = 0;
while(s1[i] != '\0'){
    i++;
}
j=0;
while(s2[j] != '\0'){
    s1[i] = s2[j];
    i++;
    j++;

}
s2[j] = '\0';
printf("Concate is");
puts(s1);




return 0;
}