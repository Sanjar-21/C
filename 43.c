#include <stdio.h>
#include <string.h>

int main(void) {
    //strcspn 
    char s[] = "ASDASDFASFASDF123452323";
    char num[] = "A121312313";
    int init = strcspn(s, num);
    printf("%d\n", init);
    return 0;
}