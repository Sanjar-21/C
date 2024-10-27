#include <stdio.h>

int main() {
    char buffer[100];
    int yosh = 25;
    float bal = 89.5;
    char ism[] = "Ali";

    // sprintf yordamida formatlangan string yaratamiz
    sprintf(buffer, "Ismi: %s, Yoshi: %d, Bali: %.1f", ism, yosh, bal);

    printf("%s\n", buffer); // Natijani ekranga chiqaramiz

    return 0;
}
