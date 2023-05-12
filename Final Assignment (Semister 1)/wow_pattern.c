#include <stdio.h>

void printPattern(int N)
{
    int row, col, space;

    for (row = 1; row <= N; row++)
    {
        for (space = 1; space <= N - row; space++)
        {
            printf(" ");
        }

        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (row % 2 == 1)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
    }
}

int main()
{
    int N;

    scanf("%d", &N);

    printPattern(N);

    return 0;
}
