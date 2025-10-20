#include <stdio.h>

int carp()
{
	int x,y;
	printf("\nilk sayiyi gir: ");
	scanf("%d", &x);
	printf("ikinci sayiyi gir: ");
	scanf("%d", &y);

	return x*y;
}

int main()
{
	printf("sonuc: %d\n", carp());
	return 0;
}