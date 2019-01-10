#include<stdio.h>
int main()
{
    int i, n, mul=1;
    printf("Enter the last number of series: ");
    scanf("%d", &n);
    printf("1 X 2 X 3 X ....... X %d",n);

    for(i=1; i<=n; i++)
    {
        mul=mul*i;
    }
    printf(" = %d", mul);

    return 0;
}

