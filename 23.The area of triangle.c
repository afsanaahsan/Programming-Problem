#include<stdio.h>
int main()
{
    float b,h,A;
    printf("Enter the base : ");
    scanf("%f", &b);

    printf("Enter the hight : ");
    scanf("%f", &h);

    A = 0.5 * b * h;

    printf("The area of trigonal is = %.3f", A);

    getch();

}
