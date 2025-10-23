#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	srand(time(NULL));
	int sayi,tahmin,beklet,tahminnsayisi=0;

	while(true){
		sayi = (rand() % 51) + 50;
		while(true){
			printf("100 ile 0 arasında bir sayı tahmin edin: ");
			scanf("%d", &tahmin);
			system("clear");
			tahminnsayisi++;

			if(sayi==tahmin){
				printf("DOĞGRU BULDUNUZ\ntahmin sayısı:%d\n", tahminnsayisi);
				scanf("%d", &beklet);
				system("clear");
				tahminnsayisi = 0;
				break;
			}

			else if(sayi > tahmin){
				printf("tahmininiz sayıdan küçük\n");
			}

			else if(sayi<tahmin){
				printf("tahmininiz sayıdan büyük\n");
			}

			else{
				printf("lütfen geçerli bir dğer giriniz\n");
			}
		}
		
	}

	return 0;
}