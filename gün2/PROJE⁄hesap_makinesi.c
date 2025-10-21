#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char operator = '\0';
    double num1 = 0.00;
    double num2 = 0.00;

    printf("ilk sayiyi girin: ");
    scanf("%lf",&num1);
    printf("\noperatoru girin (* , / , - , +): ");
    scanf(" %c" ,&operator);
    printf("\nikinci sayiyi girin: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '*':
        printf("\n%.2lf carpi %.2lf = %.2lf",num1,num2,num1*num2);
        break;
    case '/':
        printf("\n%.2lf bolu %.2lf = %.2lf",num1,num2,num1/num2);
        break;
    case '-':
        printf("\n%.2lf eksi %.2lf = %.2lf",num1,num2,num1-num2);
        break;
    case '+':
        printf("\n%.2lf arti %.2lf = %.2lf",num1,num2,num1+num2);
        break;
    
    default:
        printf("\ngecerli bir islem giriniz...");
        break;
    }
}