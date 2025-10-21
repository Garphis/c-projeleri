#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sayi;
	float not=0.0f,nottoplam=0.0f;
	
	printf("kac tane not gireceksiniz: ");
	scanf("%d", &sayi);

	for(int i = 1; i<=sayi;i++){
		printf("%d. notu girin: ", i);
		scanf("%f", &not);
		nottoplam+=not;
		system("clear");
	}
	float notortalama = nottoplam/sayi;
	printf("not ortalamasi: %.2f\n", notortalama);

	if(notortalama<50){
		printf("\nkaldınız...\n");
	}

	else if(notortalama>=50){
		printf("\ngectiniz...\n");
	}

	else{
		printf("\ngecerli degil\n");
	}
	return 0;
}