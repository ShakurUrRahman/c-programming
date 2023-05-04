#include <stdio.h>

int count_before_zero(int arr[], int N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = count_before_zero(arr, N);
    printf("%d", count);
    return 0;
}
