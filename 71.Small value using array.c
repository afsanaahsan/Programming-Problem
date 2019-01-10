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

    int min = a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
    }

    printf("Small value = %d", min);
    return 0;

}


