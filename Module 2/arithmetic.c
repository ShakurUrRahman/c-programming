#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 0 && N % 3 == 0 && N % 7 == 0)
    {
        printf("%d\n", N);
    }
    return 0;
}