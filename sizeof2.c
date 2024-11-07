#include <stdio.h>

int main(void) {
    int aa[] = {1,2,3,4,5,6,7,8,9,10};
    int lenght = sizeof(aa) / sizeof(int);
    printf("lenght: %d\n", lenght);

    printf("sizof(array) : %d\n", sizeof(aa));
    printf("sizeof(int) : %d\n", sizeof(int));
    return (0);
}