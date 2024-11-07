#include <stdio.h>
#include <math.h>

int main(void) {
    double ss = sqrt(9);
    printf("ss(9) : %f\n", ss);

    double aa = sqrt(9);
    printf("ss(-9) : %f\n", aa);

    float x = 9.0f;
    float result = sqrtf(x);

    long double x = 9.0L;
    long double result = sqrtl(x);
    return 0;
}