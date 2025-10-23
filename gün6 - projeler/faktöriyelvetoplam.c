#include <stdio.h>

int main()
{
	int x,toplam=0,carpım=1;
	printf("değer giriniz: ");
	scanf("%d", &x);
	for(int a = 1;a<=x;a++)
	{
		toplam+=a;
	}

	for(int i = 1; i <=x;i++)
	{
		carpım*=i;
	}
	printf("1 den %d ye kadar olan sayıların:\n", x);
	printf("toplamı=%d\n",toplam);
	printf("carpımı=%d\n",carpım);
	return 0;
}