#include <stdio.h>

int main()
{
    int n, x, count = 0, i;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
