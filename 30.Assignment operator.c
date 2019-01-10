#include<stdio.h>
int main()
{
   int a=5;

   a+=3;
   printf("The add value is = %d\n", a);

   a=5;
   a-=3;
   printf("The sub value is = %d\n", a);

   a=5;
   a*=3;
   printf("The mul value is = %d\n", a);

   a=5;
   a/=3;
   printf("The div value is = %d\n", a);

   a=5;
   a%=3;
   printf("The remainder value is = %d", a);

   getch();

}
