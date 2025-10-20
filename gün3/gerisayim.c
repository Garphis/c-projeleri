#include <stdio.h>
#include <unistd.h>

int main()
{
	int saniye=0;
	printf("kac saniye saymasini istiyorusunuz: ");
	scanf("%d", &saniye);

	while(saniye>=0)
	{
		printf("\n%d",saniye);
		sleep(1);
		saniye--;
	}

	printf("\nsayim bitti...\n");
}