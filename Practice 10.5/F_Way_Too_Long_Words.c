#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        char s[101];
        scanf("%s", s);
        int n = strlen(s);
        if (n > 10)
        {
            printf("%c%d%c", s[0], n - 2, s[n - 1]);
        }
        else
        {
            printf("%s", s);
        }
        printf("\n");
    }
    return 0;
}
