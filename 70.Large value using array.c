#include<stdio.h>
int main()
{
    int i,n,a[10],sum=0;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
    }

    printf("Large value = %d", max);
    return 0;

}

