#include <stdio.h>
int main()
{
    int ch;
    printf("Enter a uppercase letter : ");
    scanf("%c", &ch);

    printf("The lowercase letter is : %c\n", ch+32);
    getch();
}



