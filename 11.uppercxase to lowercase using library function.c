#include <stdio.h>
int main()
{
    int upper,lower;
    printf("Enter a uppercase letter: ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("The lowercase letter is = %c\n", lower);
    getch();
}
