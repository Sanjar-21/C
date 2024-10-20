#include <stdio.h>
#include <string.h>

int main(void) {
    char s21[] = "Hello World!!";
    char s42[] = "Hello World!!!";
    // strigni uzinni uziga hech qachon solishtilmaydi 
    /*if (s21 == s42) {

    } else if (s21 > s42) {

    } else if (s21 < s42) {

    }*/
   
    if(strcmp(s21, s42) == 0) {
        printf("true");
    } else if(strcmp(s21, s42) < 0) {
        printf(" s21 < s42");
    } else if (strcmp(s21, s42) > 0) {
        printf(" s21 > s42");
    }

    return 0;
}
