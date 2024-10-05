#include <stdio.h>

int main(int argc, char *argv[]){
    printf("argc: %d\n", argc);

    // printf("argv[0] = %s\n", argv[0]);
    // printf("argv[0] = %s\n", argv[1]);
    // printf("argv[0] = %s\n", argv[2]);
    // printf("argv[0] = %s\n", argv[3]);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}