#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the farenhite : ");
    scanf("%f", &F);

    C = (F-32)/1.8;

    printf("The Centigrade is : %.2f", C);

    getch();
}
