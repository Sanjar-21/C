#include <stdio.h>

char *method1();

int main(void) {
    char *s21 = method1();

    printf("s21 : %s\n", s21);

}


char *method1() {
    return "return salom ";
}