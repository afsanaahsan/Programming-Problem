#include <stdio.h>
int main()
{
    int ch;
    printf("Enter a lowercase character : ");
    scanf("%c", &ch);

    printf("The uppercase character is : %c\n ", ch-32);
    getch();
}
