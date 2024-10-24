#include <stdio.h>
#include <stdarg.h>

int max(int a, int b);

int main(void) {
    max(12, 13);
}

int max(int a, int b) {
    if(a > b) return a;
    else return b;
}