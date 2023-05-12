#include <stdio.h>

void countCharacters(char *str, int *lowercase, int *uppercase, int *spaces)
{
    *lowercase = 0;
    *uppercase = 0;
    *spaces = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            (*lowercase)++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            (*uppercase)++;
        }
        else if (str[i] == ' ')
        {
            (*spaces)++;
        }
    }
}

int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int lowercaseCount, uppercaseCount, spacesCount;
    countCharacters(str, &lowercaseCount, &uppercaseCount, &spacesCount);

    printf("Capital - %d\n", uppercaseCount);
    printf("Small - %d\n", lowercaseCount);
    printf("Spaces - %d\n", spacesCount);

    return 0;
}
