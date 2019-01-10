#include<stdio.h>
int main()
{
  float mark;
  printf("Enter your mark : ");
  scanf("%f", &mark);

  if(mark>=80)
  {
      printf("A+");
  }
  else if(mark>=70)
  {
      printf("A");
  }
  else if(mark>=60)
  {
      printf("B");
  }
  else if(mark>=50)
  {
      printf("C");
  }
  else if(mark>=40)
  {
      printf("D");
  }
  else
  {
      printf("Fail");
  }

  return 0;
}
