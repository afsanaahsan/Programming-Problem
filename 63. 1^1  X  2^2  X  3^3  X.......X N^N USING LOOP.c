#include<stdio.h>
int main()
{
    int i, n, mul=1;
    printf("Enter the last number of series: ");
    scanf("%d", &n);
    printf("1^2 X 2^2 X 3^2 X ....... X %d^2",n);

    for(i=1; i<=n; i++)
    {
        mul=mul*i*i;
    }
    printf(" = %d", mul);

    return 0;
}


