#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int sum, a, b, c;
        scanf("%d %d %d %d", &sum, &a, &b, &c);

        int totalSum = a + b + c;
        int ans = sum - totalSum;
        printf("%u\n", ans);
    }

    return 0;
}
