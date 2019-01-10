#include<stdio.h>
int main()
{
    int i,n,a[10],sum=0;
    printf("How many numbers you want to add: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is = %d\n", sum);

    printf("The average is = %.2f\n",(float)sum/n);

    return 0;
}
