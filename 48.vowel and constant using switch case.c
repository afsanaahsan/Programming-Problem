#include <stdio.h>
int main()
{
    int ch;
    printf("Enter a letter : ");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Constant");
    }
    return 0;
}

