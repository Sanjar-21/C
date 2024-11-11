#include <stdio.h>
#include <ctype.h>

int main() {
    char belgi = '\n'; // Yangi qator belgisi

    if (iscntrl(belgi)) {
        printf("Belgi boshqaruv belgi ekan.\n");
    } else {
        printf("Belgi boshqaruv belgi emas.\n");
    }

    return 0;
}
