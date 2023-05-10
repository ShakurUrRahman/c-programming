#include <stdio.h>
#include <string.h>

#define MAX_CHARS 26

void countLetterOccurrences(char S[])
{
    int letterCount[MAX_CHARS] = {0};
    int length = strlen(S);

    // Count occurrences of each letter
    for (int i = 0; i < length; i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            int index = S[i] - 'a';
            letterCount[index]++;
        }
    }

    // Print the results in ascending order
    for (int i = 0; i < MAX_CHARS; i++)
    {
        if (letterCount[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, letterCount[i]);
        }
    }
}

int main()
{
    char S[10000001];
    scanf("%10000000s", S);

    printf("Occurrences of each letter:\n");
    countLetterOccurrences(S);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
