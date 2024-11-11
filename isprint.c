#include <stdio.h>
#include <ctype.h>

int main() {
    char belgi = 'A';

    if (isprint(belgi)) {
        printf("%c belgisi chop etish mumkin.\n", belgi);
    } else {
        printf("%c belgisi chop etish mumkin emas.\n", belgi);
    }

    return 0;
}
