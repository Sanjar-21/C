#include <stdio.h>

int findMiddleIndex(int left, int right) {
    return left + (right - left) / 2;
}

int main() {
    int left = 1000000000;  // Juda katta qiymat
    int right = 2000000000; // Yana katta qiymat

    int middle = findMiddleIndex(left, right);
    printf("O'rta indeks: %d\n", middle);

    return 0;
}
