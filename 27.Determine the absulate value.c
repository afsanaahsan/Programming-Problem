#include<stdio.h>
int main()
{
    int value, result;
    printf("Enter a negative or positive value : ");
    scanf("%d", &value);

    result = abs(value);

    printf("The absolute value is = %d", result);

    getch();
}
