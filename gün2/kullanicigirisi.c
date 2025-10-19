#include <stdio.h>
#include <string.h>

int main()
{
	char username[] = "eren";
	char pasw[] = "12345678";
	char username_enter[50] = "";
	char pasw_enter[50] = "";

	printf("kullanici adinizi girin: ");
	fgets(username_enter, sizeof(username_enter), stdin);
	username_enter[strlen(username_enter) - 1] = '\0';

	printf("sifrenizi girin: ");
	fgets(pasw_enter, sizeof(pasw_enter), stdin);
	pasw_enter[strlen(pasw_enter) - 1] = '\0';
	
	if(strcmp(pasw_enter,pasw)==0 && strcmp(username,username_enter)==0)
	{
		printf("\ngiris yapildi...");
	}

	else{
		printf("\nkullanici bulunamadi...");
	}
}