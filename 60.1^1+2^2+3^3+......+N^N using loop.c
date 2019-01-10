#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the last number of series: ");
    scanf("%d", &n);
    printf("1^1 + 2^2 + 3^3 + ....... + %d^%d",n,n);

    for(i=1; i<=n; i++)
    {
        sum=sum+i*i;
    }
    printf(" = %d", sum);

    return 0;
}
