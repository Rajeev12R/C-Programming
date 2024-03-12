#include <stdio.h>
#include <math.h>
void cubes(int *num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    cubes(&num);

    return 0;
}
void cubes(int *num)
{
    int cube = pow(*num, 3);
    printf("The cube of the number is = %d",cube);

}