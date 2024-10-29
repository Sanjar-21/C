#include <stdio.h>
#include "./library.h"

int main(void) {
    printf("%d + %d = %d\n", 3, 3, add(3,3));
    printf("%d - %d = %d\n", 3, 3, sun(3,3));
    return 0;
}