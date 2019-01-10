#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the last number of series : ");
    scanf("%d", &n);

    printf("1 + 3 + 5 +.......+ %d ", n);

    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("= %d", sum);

    return 0;
}
