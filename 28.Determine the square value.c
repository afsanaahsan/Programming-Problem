#include<stdio.h>
int main()
{
    double square, result;
    printf("Enter a value : ");
    scanf("%lf", &square);

    result = sqrt(square);

    printf("The square of this value is = %.2lf", result);

    getch();
}
