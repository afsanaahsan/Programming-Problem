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
  add(30,10);
  sub(30,10);
  return 0;
}


