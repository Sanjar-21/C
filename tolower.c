#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char befor = 'S';
    char after = tolower(befor);

    printf("befor %c\n", befor);
    printf("after %c\n", after);

    char string[] = "STRING TOLOWER IN C";
    int lenght = strlen(string);

    for(int i = 0; i < lenght; i++) {
        string[i] = tolower(string[i]);
    }

    puts(string);
    return 0;
}