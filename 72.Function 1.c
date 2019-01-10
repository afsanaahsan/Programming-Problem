#include<stdio.h>

int add(int a, int b)
{
    int sum;
    sum=a+b;
    printf("The sum is: %d\n", sum);
}

int sub(int a, int b)
{
    int sub;
    sub=a-b;
    printf("The sub is: %d", sub);
}


int main()
{
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  add(num1, num2);
  sub(num1, num2);
  return 0;
}

