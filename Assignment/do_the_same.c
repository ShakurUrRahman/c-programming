#include <stdio.h>

int main()
{
    int n, k, i, j;

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
