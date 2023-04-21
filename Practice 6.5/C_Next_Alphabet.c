#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a == 'z')
    {
        printf("a");
    }
    else
    {
        int ans = a + 1;
        printf("%c", ans);
    }
    return 0;
}