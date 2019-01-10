#include<stdio.h>
#include<math.h>
int main()
{
    float r ,A;
    printf("Enter the radius : ");
    scanf("%f", &r);

    A = M_PI * r * r;

    printf("The area of trigonal is = %.3f", A);

    getch();

}

