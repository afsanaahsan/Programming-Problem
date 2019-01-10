#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the centigrade : ");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("The Farenhite is : %.2f", F);

    getch();
}
