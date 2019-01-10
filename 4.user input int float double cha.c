#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char ch;

    printf("Enter an integer number\n a floating number\n a double number\n a character\n");
    scanf("%d\n %f\n %lf\n %c", &num1,&num2,&num3,&ch);
    printf("integer = %d\n floating number = %.2f\n double number = %.7lf\n character = %c", num1,num2,num3,ch);
    getch();


}
