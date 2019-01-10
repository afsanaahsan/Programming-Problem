#include <stdio.h>
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result=a+b;
    printf("The sum is : %d\n", result);

    result=a-b;
    printf("The sub is : %d\n", result);

    result=a*b;
    printf("The mul is : %d\n", result);

    result=a/b;
    printf("The div is : %d\n", result);

    result=a%b;
    printf("The remainder is : %d\n", result);

    getch();


}

