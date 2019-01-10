#include<stdio.h>
int main()
{
    int n, i;
    printf("Which time table you want to show: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }
    return 0;
}
