#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, freq[26] = {0};

    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {
        freq[s[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a' + i, freq[i]);
    }

    return 0;
}
