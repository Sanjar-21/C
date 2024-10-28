#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[] = "3.1415 pi qiymati";
    double reult;
    char *ptr;
    reult = strtod(s, &ptr);
    printf("result: %f\n", reult);
    printf("string: |%s|\n", ptr);
    return 0;
}