#include <stdio.h>
#include <string.h>

typedef char string[50];

int main()
{
	string name = "";
	printf("adınızı girin: ");
	fgets(name , sizeof(name) , stdin);

	printf("adınız: %s\n", name);

	(strcmp("eren",name)==0) ? printf("aynı") : printf("farklı");

	return 0;
}