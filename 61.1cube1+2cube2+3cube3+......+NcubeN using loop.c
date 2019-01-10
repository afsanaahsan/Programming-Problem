#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the last number of series: ");
    scanf("%d", &n);
    printf("1cube1 + 2cube2 + 3cube3 + ....... + %dcube%d",n,n);

    for(i=1; i<=n; i++)
    {
        sum=sum+i*i*i;
    }
    printf(" = %d", sum);

    return 0;
}

