#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    printf("%c", ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Your character is a vowel letter!");
    }

    return 0;
    }