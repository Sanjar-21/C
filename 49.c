#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 4;
    int b = 9;
    int c = 0;
    if(a == b) {
        c = 10;
    } else {
        c = 5;
    }
    printf("c -->> %d\n", c);
}