#include<stdio.h>

int area(float b, float h)
{
    float area;
    area = 0.5 * b * h;
    printf("The area of triangle is : %.3f\n", area);
}


int main()
{
  float base, height;
  printf("Enter base: ");
  scanf("%f", &base);

  printf("Enter height: ");
  scanf("%f", &height);

  area(base, height);
}
