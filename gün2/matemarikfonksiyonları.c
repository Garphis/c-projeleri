#include <stdio.h>
#include <math.h>

int main()
{
    double x=0.00;
    printf("bir sayi girin: ");
    scanf("%lf", &x);

    
    printf("sayinin karesi: %.2lf\n", pow(x,2));
    printf("sayinin karekoku: %.2lf\n", sqrt(x));
    printf("sayinin cosu: %.2lf\n", cos(x));
    printf("sayinin sini: %.2lf\n", sin(x));

    return 0;
}