#include <stdio.h>
#include <math.h>

int main(void) {
    double a = 13.2;
    double b = 13.1;
    double resolt = fmod(a, b);
    printf("%f\n", resolt);
    return 0;
}