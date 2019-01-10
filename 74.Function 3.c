#include<stdio.h>

int square(float n)
{
    float s;
    s=sqrt(n);
    printf("%.2f", s);
}

int main()
{
    float a;
    printf("Enter a positive number : ");
    scanf("%f", &a);

    square(a);
}
