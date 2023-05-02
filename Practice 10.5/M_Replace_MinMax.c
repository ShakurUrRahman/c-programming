#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int min_idx, max_idx, temp;
    min_idx = 0;
    max_idx = 0;
    for (int i = 1; i < N; i++)
    {
        if (a[i] < a[min_idx])
        {
            min_idx = i;
        }
        if (a[i] > a[max_idx])
        {
            max_idx = i;
        }
    }
    temp = a[min_idx];
    a[min_idx] = a[max_idx];
    a[max_idx] = temp;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}