#include<stdio.h>
int main()
{
    double value, power, result;
    printf("Enter a value : ");
    scanf("%lf", &value);

    printf("Enter the power of value : ");
    scanf("%lf", &power);

    result = pow(value,power);

    printf("The result is = %.2lf", result);

    getch();

}
