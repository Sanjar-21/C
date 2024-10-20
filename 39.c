#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ewewscsxczs2scccsdc2";
    char b[] = "safvffjvlfjvaslkjvalskjvas2lksdladalskdj2";
    char *d = strpbrk(s,b);
    printf("%s\n", d);
}