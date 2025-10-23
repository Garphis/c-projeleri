#include <stdio.h>
#include <string.h>

typedef char string[100];

typedef struct{
	string ad;
	string yazar;
	int sayfa;
}kitap;

void encokkitap(kitap encok);

int main()
{
	kitap kitaplar[3];
	for(int i = 1;i<4;i++){
		printf("\n%d.kitabın adı: ", i);
		fgets(kitaplar[i-1].ad,100,stdin);
		printf("%d.kitabın yazarı: ", i);
		fgets(kitaplar[i-1].yazar,100,stdin);
		printf("%d.kitabın sayfa sayısı: ", i);
		scanf("%d", &kitaplar[i-1].sayfa);
		getchar(); 
	}

	if(kitaplar[0].sayfa > kitaplar[1].sayfa && kitaplar[0].sayfa > kitaplar[2].sayfa){
		encokkitap(kitaplar[0]);
	}

	else if(kitaplar[1].sayfa > kitaplar[2].sayfa){
		encokkitap(kitaplar[1]);
	}

	else{
		encokkitap(kitaplar[2]);
	}

	return 0;
}

void encokkitap(kitap encok){
    printf("\n--- En çok sayfalı kitap ---\n");
    printf("Adı: %s\n", encok.ad);
    printf("Yazarı: %s\n", encok.yazar);
    printf("Sayfa sayısı: %d\n", encok.sayfa);
}