#include <stdio.h>

void make_array(int lenght);

int main(void) {
    printf("Sizeof (int) : %zu\n", sizeof(int)); // 4 qiymatga ega

    printf("Sizeof (char) : %zu\n", sizeof(char)); // 1 qiymatga ega

    printf("Sizeof (double) : %zu\n", sizeof(double)); // 8 qiymatga ega

    double x  = 11;

    printf("Sizeof : %zu\n", sizeof(x) );

    char string[] = "1,2,3,4,5,6,7,8,9";

    printf("String : %zu\n", sizeof(string));

    int arr[] = {1,2,3,4,5,6,7,8,9};

    size_t lenght_arr = sizeof(arr) / sizeof(arr[0]);
    printf("size_t: %zu\n", sizeof(lenght_arr));

    printf("Doubl son : %zu\n", sizeof(21.2));

    make_array(20);
    make_array(10);

    return 0;
}

void make_array(int lenght) {
    int my_array[lenght];
    printf("my_array sizeof : %zu\n", sizeof(my_array));
}