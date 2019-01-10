#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the last number of series : ");
    scanf("%d",&n);
    printf("1 + 2 + 3 +......+ %d ",n);
    for(i=1; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("= %d", sum);

    return 0;
}
