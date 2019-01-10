#include <stdio.h>
int main()
{
    int a,b;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d\n %d", &a, &b);
    avg = (float)(a+b)/2;
    printf("The avg is %.2f\n", avg);
    getch();

}

