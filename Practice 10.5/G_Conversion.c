#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    printf("%s\n", s);
    return 0;
}
