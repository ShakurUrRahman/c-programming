#include <stdio.h>

int main()
{
    int N;
    int tigerScore = 0, pathanScore = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int X1, X2;

        scanf("%d", &X1);

        scanf("%d", &X2);

        if (X1 > X2)
        {
            tigerScore++;
        }
        else if (X2 > X1)
        {
            pathanScore++;
        }
    }

    if (tigerScore > pathanScore)
    {
        printf("Tiger\n");
    }
    else if (pathanScore > tigerScore)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}
