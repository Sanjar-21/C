#include <stdio.h>
#include <string.h>

enum Day {
    Dushanba,
    Seshanba,
    Chorshanba,
    Paysanba,
    Juma = 11,
    Shanba,
    Yakshanba
};

int main(void) {
    enum Day kecha = Dushanba;
    enum Day bugin = Seshanba;
    enum Day ertaga = Chorshanba;

    printf("Kecha: %d\n", kecha);
    printf("Bugin: %d\n", bugin);
    printf("Ertaga: %d\n", ertaga);

    printf("Juma %d\n", Juma);
    return 0;
}