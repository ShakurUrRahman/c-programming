#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 'a' && X <= 'z')
    // X >= 97 && X <= 122
    {
        int ans = X - 32;
        printf("%c", ans);
    }
    else
    {
        int ans = X + 32;
        printf("%c", ans);
    }
    return 0;
}