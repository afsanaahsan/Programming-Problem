#include <stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1+num2+num3;

    avg = (float)sum/3; //typecasting//

    printf("The sum is %d\n", sum);
    printf("The avg is %f\n", avg);
    getch();

}
