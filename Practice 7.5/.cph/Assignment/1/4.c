//
#include <stdio.h>

int main()
{
    int N, X, V, i;
    scanf("%d", &N);

    int A[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &X);
    scanf("%d", &V);

    // changing the value of Xth index to V
    A[X] = V;

    // printing the array in reverse order
    for (i = N - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
