#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];
    int vowelCount = 0;
    scanf("%s", S);
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            vowelCount++;
        }
    }
    printf("%d\n", vowelCount);
    return 0;
}
