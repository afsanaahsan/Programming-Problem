#include<stdio.h>
int main()
{
    float l,w,A;
    printf("Enter the length : ");
    scanf("%f", &l);

    printf("Enter the width : ");
    scanf("%f", &w);

    A = l * w;

    printf("The area of trigonal is = %.3f", A);

    getch();

}
