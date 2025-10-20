#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    float bakiye = 100.0f;
    float istek = 0.0f;
    int secim = 0;


    while(true){
        printf("ne yapmak istiyorsunuz\n 1 - Bakiye görüntüle \n 2 - Para yatır\n 3 - Para çek\n 4 - Çıkış\n");
        scanf("%d", &secim);
        system("clear");
        if(secim == 1){
            printf("mevcut bakiye = %.2f$\n", bakiye);
        }
        else if(secim == 2){
            printf("ne kadar yatırmak istiyorsunuz: ");
            scanf("%f", &istek);
            system("clear");
            if(istek<0){
                printf("geçersiz değer...\n");
            }
            else{
                bakiye += istek;
                printf("yeni bakiye: %.2f$\n", bakiye);
            }
        }
        else if(secim == 3){
            printf("ne kadar çekmek istiyorsunuz: ");
            scanf("%f", &istek);
            if(istek > bakiye){
                printf("yetersiz bakiye\n");
            }

            else if(istek<0){
                printf("geçersiz değer...\n");
            }
            else{
                bakiye -= istek;
                printf("yeni bakiye: %.2f$\n", bakiye);
            }
        }
        else if(secim == 4){
            printf("çıkış yapılıyor...");
            break;
        }
        else{
            printf("lütfen geçerli bir işlem giriniz...");
        }
    }
        
    return 0;
}