#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
        printf("Sayi cift.\n");
    else
        printf("Sayi tek.\n");
        
    printf("1'den %d'ye kadar sayilar:\n", sayi);
    for (int i = 1; i <= sayi; i++) {
        printf("%d\n", i);
    }

    return 0;
}
