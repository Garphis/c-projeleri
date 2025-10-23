#include <stdio.h>

typedef enum{
	PAZARTESİ = 1,SALI = 2,ÇARŞAMBA = 3,PEŞEMBE = 4,CUMA = 5,CUMARTESİ = 6,PAZAR = 7
}Gun;

int main()
{
	Gun gun = PAZARTESİ;

	if(gun<6){
		printf("hafta içi\n");
	}

	else{
		printf("hafat sonu\n");
	}

	return 0;
}