#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a - b > 0)
    {
        int ans = a - b;
        printf("%d", ans);
    }
    else
    {
        printf("0");
    }
    return 0;
}