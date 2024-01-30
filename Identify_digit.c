#include <stdio.h>
#include <ctype.h>
int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (isdigit(character)) {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is not a digit.\n",character);
    }

    return 0;
}
