#include <stdio.h>

int main()
{
    int N, evenCount = 0, oddCount = 0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("%d ", evenCount);
    printf("%d", oddCount);
    return 0;
}
