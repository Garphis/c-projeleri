#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int min = 50;
	int max = 100;

	int randomnum = (rand() % (max - min + 1)) + min;
	printf("%d", randomnum);

	return 0;
}