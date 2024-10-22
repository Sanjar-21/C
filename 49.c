#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 9;
    int b = 8;
    int c = 0;
    // if(a == b) {
    //     c = 10;
    // } else {
    //     c = 5;
    // }
    int num = 0;

    c = (a == b) ? 10 : 5;
    num = 10 * ((a == c) ? 2 : 1);
    printf("c -->> %d\n", c);
    printf("num -->>%d\n", num);
}