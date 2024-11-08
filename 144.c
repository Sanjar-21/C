#include <stdio.h>

int globalVar = 10; // Global o'zgaruvchi

void myFunction() {
    printf("Global o'zgaruvchi (myFunction): %d\n", globalVar);
}

int main() {
    printf("Global o'zgaruvchi (main): %d\n", globalVar);
    myFunction();
    return 0;
}
