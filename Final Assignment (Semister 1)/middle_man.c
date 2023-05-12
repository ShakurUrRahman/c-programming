#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int ages[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ages[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (ages[j] > ages[j + 1])
            {
                int temp = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp;
            }
        }
    }

    int middle1, middle2;

    if (N % 2 == 1)
    {
        middle1 = (N + 1) / 2;
        printf("%d\n", ages[middle1 - 1]);
    }
    else
    {
        middle1 = N / 2;
        middle2 = middle1 + 1;
        printf("%d %d\n", ages[middle1 - 1], ages[middle2 - 1]);
    }

    return 0;
}
