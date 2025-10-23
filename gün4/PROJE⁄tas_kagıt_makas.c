#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int rakip();
const char* secimibulma(int a);

int main()
{
    srand(time(NULL));

    int secim, rakipsecim;

    while (true)
    {
        printf("*** TAŞ KAĞIT MAKAS OYUNUNA HOŞGELDİNİZ ***\n");
        printf("1 - taş\n2 - kağıt\n3 - makas\n");
        printf("Seçiminizi girin: ");
        scanf("%d", &secim);

        if (secim != 1 && secim != 2 && secim != 3)
        {
        	system("clear");
            printf("Geçersiz tercih!\n\n");
            continue;
        }

        rakipsecim = rakip();
        system("clear");

        printf("Senin seçimin: %s\n", secimibulma(secim));
        printf("Rakibin seçimi: %s\n", secimibulma(rakipsecim));

        if (rakipsecim == secim)
        {
            printf("Berabere!\n\n");
        }
        else if ((secim == 1 && rakipsecim == 3) ||
                 (secim == 2 && rakipsecim == 1) ||
                 (secim == 3 && rakipsecim == 2))
        {
            printf("Kazandınız!\n\n");
        }
        else
        {
            printf("Kaybettiniz!\n\n");
        }
    }

    return 0;
}

int rakip()
{
    int secim = (rand() % 3) + 1;
    return secim;
}

const char* secimibulma(int a)
{
    if (a == 1)
        return "taş";
    else if (a == 2)
        return "kağıt";
    else
        return "makas";
}