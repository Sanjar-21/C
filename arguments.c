#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Ikkita arguments kirtig!");
        exit(-1);
    }
    printf("argc: %d\n", argc);

    // printf("argv[0] = %s\n", argv[0]);
    // printf("argv[0] = %s\n", argv[1]);
    // printf("argv[0] = %s\n", argv[2]);
    // printf("argv[0] = %s\n", argv[3]);
    // for(int i = 0; i < argc; i++){
    //     printf("argv[%d] = %s\n", i, argv[i]);
    // }

    int lower = atoi(argv[1]);
    int higner = atoi(argv[2]);
    for(int i = lower; i <= higner; i++){
        printf("%d\n", i);
    }
    return 0;
}