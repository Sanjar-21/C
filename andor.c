#include <stdio.h>

int main(){
    // or || and &&
    int y = 2021;
    int g = 2025;

    if(g <= 2025 || g >= 2030){
        printf("Nice\n");
    }else printf("niam\n");

    if(y <= 2021 && y >= 2020){
        printf("Nice\n");
    } else printf("main\n");
    return (0);
}