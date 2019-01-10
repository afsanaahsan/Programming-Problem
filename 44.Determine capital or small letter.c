#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a letter : ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
    {
        printf("Small Letter");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Capital letter");
    }
    else
    {
        printf("Not a letter");
    }

    return 0;
}
