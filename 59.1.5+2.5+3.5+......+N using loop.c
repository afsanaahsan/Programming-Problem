#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter the last number of series : ");
    scanf("%f",&n);
    printf("1.5 + 2.5 + 3.5 +......+ %.1f ",n);
    for(i=1.5; i<=n; i++)//series suru hoice 1.5 theke tai i=1.5,,,,1kore different tai i++//
    {
        sum = sum+i;
    }
    printf("= %.1f", sum);

    return 0;
}


