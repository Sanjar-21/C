#include <stdio.h>

int fact(int a) {
    if(a == 1) {
        return 1;
    } else {
        return a * fact(a - 1);
    }
}

int main(void) {
    int k = 9;
    printf("9 = %d\n", fact(k));
    return 0;
}