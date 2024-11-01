#include <stdio.h>

int main()
{
    FILE *file = fopen("input.txt", "r");
    if (file != NULL)
    {
        int ch = fgetc(file); // Fayldan bitta belgi o'qiladi
        printf("O'qilgan belgi: %c\n", ch);

        ungetc(ch, file); // Belgini qaytarib qo'yadi

        // Belgini qayta o'qish
        ch = fgetc(file);
        printf("Qayta o'qilgan belgi: %c\n", ch);

        fclose(file);
    }
    return 0;
}
/*

ungetc funksiyasi C dasturlash tilida fayl oqimidan o'qilgan 
belgini yana qaytarib, fayl oqimiga qo'shish uchun ishlatiladi. 
Bu funksiya fgetc yoki shunga o'xshash o'qish funksiyalari bilan 
o'qilgan belgini "orqaga surish" imkonini beradi, ya'ni keyingi 
o'qishda bu belgi yana qayta o'qiladi. Sintaksisi quyidagicha:
*/