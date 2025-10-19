#include <stdio.h>

int main()
{
	int day = 0;
	printf("bugun haftanın kacinci gunu: ");
	scanf("%d", &day);

	switch(day){
		case 1:
			printf("bugun pazartesi...\n");
			break;
		case 2:
			printf("bugun sali...\n");
			break;
		case 3:
			printf("bugun carsamba...\n");
			break;
		case 4:
			printf("bugun persembe...\n");
			break;
		case 5:
			printf("bugun cuma...\n");
			break;
		case 6:
			printf("bugun cumartesi...\n");
			break;
		case 7:
			printf("bugun pazar...\n");
			break;
		default:
			printf("gecerli bir gun giriniz...\n");
			break;
	}
	return 0;
}