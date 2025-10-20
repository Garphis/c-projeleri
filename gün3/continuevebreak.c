#include <stdio.h>

int main()
{
	printf("BİR\n");
	for(int i = 0;i<11;i++)
	{
		printf("%d\n", i);
	}
	printf("İKİ\n");
	for(int a = 0;a<11;a++)
	{
		printf("%d\n", a);
		if (a==4)
		{
			break;
		}
	}
	printf("ÜÇ\n");
	for(int b = 0;b<11;b++)
	{
		
		if (b==4)
		{
			continue;
		}
		printf("%d\n", b);
	}
}