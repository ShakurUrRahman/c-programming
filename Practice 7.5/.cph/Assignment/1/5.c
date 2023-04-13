// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = N - 1; i >= 0; i -= 2)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);

    int A[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = N - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}
